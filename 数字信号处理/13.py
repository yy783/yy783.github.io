import numpy as np
import matplotlib.pyplot as plt
from scipy import signal
plt.rcParams['font.sans-serif'] = ['SimHei']
plt.rcParams['axes.unicode_minus'] = False


def num1(n):
    return n >= 0


def num2(n, a):
    return (0.1 * a) ** n


def num2_3(n, a):
    return signal.convolve(num1(n), num2(n, a))


def stepseq(n1, n2, a):
    if (n2 < n1):
        print("error!!!")
    else:
        n = np.arange(n1, n2 + 1, 1)
        num_1 = num1(n)
        num_2 = num2(n, a)
        num_3 = num2_3(n, a)
        ws_1, h_1 = signal.freqz(num_1, whole=True)
        ws_2, h_2 = signal.freqz(num_2, whole=True)
        ws_3, h_3 = signal.freqz(num_3, whole=True)
        h_4 = h_1 * h_2
        print(h_3)
        print()
        print(h_4)
        return n, ws_1, ws_2, ws_3, h_1, h_2, h_3, h_4


def drawPicture(a):
    n, ws_1, ws_2, ws_3, h_1, h_2, h_3, h_4 = stepseq(-10, 10, a)
    plt.subplot(221)
    plt.title('幅频特性 X1 * X2')
    plt.plot(ws_3, 20 * np.log10(abs(h_3)))
    plt.subplot(222)
    plt.title('相频特性 X1 * X2')
    plt.plot(ws_3, np.unwrap(np.angle(h_3)))
    plt.subplot(223)
    plt.title('幅频特性 X1 x X2')
    plt.plot(ws_2, 20 * np.log10(abs(h_4)))
    plt.subplot(224)
    plt.title('相频特性 X1 x X2')
    plt.plot(ws_2, np.unwrap(np.angle(h_4)))
    plt.show()

if __name__ == '__main__':
    drawPicture(5)
