import numpy as np
import matplotlib.pyplot as plt
from scipy import signal
from matplotlib.patches import Circle
plt.rcParams['font.sans-serif'] = ['SimHei']
plt.rcParams['axes.unicode_minus'] = False


def productH_x(a):
    num = [1.0, 1.0, 2.0]
    den = [1.0, 0.1 * a, -0.25]
    z, p, k = signal.tf2zpk(num, den)
    return num, den, z, p, k

def productX_n(a):
    n = np.arange(-90, 90, 1)
    u = n >= 0
    return 2 * np.cos(0.1 * a * np.pi * n) * u


def drawCircle(a):
    fig, ax = plt.subplots()
    num, den, z, p, k = productH_x(a)
    ax.set_title('Pole-zero plot')
    ax.set_ylabel('Image')
    ax.set_xlabel('Real')
    ax.set_xlim(-2.25, 2.25)
    ax.set_ylim(-1.5, 1.5)
    ax.grid()
    circle = Circle(xy=(0.0, 0.0), radius=1, alpha=0.3, facecolor='g')
    ax.add_patch(circle)
    for z_i in z:
        plt.plot(np.real(z_i), np.imag(z_i), 'bo')
    for p_i in p:
        plt.plot(np.real(p_i), np.imag(p_i), 'rx')
    plt.show()


def stepseq(n1, n2, a):
    if (n2 < n1):
        print("error!!!")
    else:
        num, den, _, _, _ = productH_x(a)
        n = np.arange(n1, n2 + 1, 1)
        y_full = signal.lfilter(num, den, productX_n(a))
        return n, y_full


def drawPicture(a):
    ws_1, h_1 = signal.freqz(productX_n(a), whole=True)
    n, y_full = stepseq(-90, 89, a)
    plt.subplot(221)
    plt.title('Amplitude frequency characteristic')
    plt.ylabel('Amplitude [dB]')
    plt.xlabel('Frequency [rad/sample]')
    plt.plot(ws_1, 20 * np.log10(abs(h_1)))
    plt.subplot(222)
    plt.title('Phase frequency characteristic')
    plt.ylabel('Angle (radians)')
    plt.xlabel('Frequency [rad/sample]')
    plt.plot(ws_1, np.unwrap(np.angle(h_1)))
    plt.subplot(223)
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("Full")
    plt.stem(n, y_full)
    plt.show()

if __name__ == '__main__':
    drawCircle(5)
    drawPicture(5)
