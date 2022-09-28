import matplotlib.pyplot as plt
import numpy as np
from scipy import signal


def stepseq(n1, n2, N):
    if (n2 < n1):
        print("error!!!")
    else:
        den = np.array([1.0, -0.5 * N])
        num = np.array([1.0, 0])
        y_0 = np.array([0.0])

        n = np.arange(n1, n2 + 1, 1)
        n_len = len(n)

        # x = (0.5 * N) ** n * (n >= 0)
        x_2 = n == 0
        print(x_2)
        # 单位冲激响应
        h_n_1, h_A_1 = signal.dimpulse((num, den, 1), n=n_len)

        # 全响应
        zi_x_1 = signal.lfiltic(num, den, y_0)
        y_x_ful, _ = signal.lfilter(num, den, x_2, zi=zi_x_1)

        # 单位阶跃响应
        h_n_2, h_A_2 = signal.dstep((num, den, 1), n=n_len)

        return n, h_n_1, np.squeeze(h_A_1), h_n_2, np.squeeze(h_A_2), y_x_ful



def draw_picture():
    n, h_n_1, h_A_1, h_n_2, h_A_2,y_x_ful = stepseq(-2, 10, 1)

    plt.subplot(221)
    plt.stem(h_n_1, h_A_1)
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("Unit Impulse Response Dimpulse")
    plt.xlim((-2, 10))
    plt.xticks(np.arange(-2, 10, 1))
    plt.ylim((-3, 3))
    plt.yticks(np.arange(-3, 3, 1))

    plt.subplot(222)
    plt.stem(n, y_x_ful)
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("Unit Impulse Response Lfilter")
    plt.xlim((-2, 10))
    plt.xticks(np.arange(-2, 10, 1))
    plt.ylim((-3, 3))
    plt.yticks(np.arange(-3, 3, 1))

    plt.subplot(223)
    plt.stem(h_n_2, h_A_2)
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("Unit Step Response")
    plt.xlim((-2, 10))
    plt.xticks(np.arange(-2, 10, 1))
    plt.ylim((-3, 3))
    plt.yticks(np.arange(-3, 3, 1))

    plt.show()

if __name__ == '__main__':
  draw_picture()
