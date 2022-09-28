import matplotlib.pyplot as plt
import numpy as np
from scipy import signal


def stepseq(n1, n2, N):
    if (n2 < n1):
        print("error!!!")
    else:
        den = np.array([1.0, -0.6])
        num = np.array([1.0, 2.0])

        y_0 = np.array([1.0])
        n = np.arange(n1, n2 + 1, 1)
        # n = np.arange(-3, 4, 1)
        x = (0.5 * N) ** n * (n >= 0)
        # print(x)
        n_len = len(n)
        # 零状态响应
        x_0 = np.array([0])
        zi_x_0 = signal.lfilter_zi(num, den)
        y_x_0, _ =signal.lfilter(num, den, x, zi=zi_x_0 * x_0)

        # 零输入响应
        x_1 = np.zeros(n_len)
        zi_x_1 = signal.lfiltic(num, den, y_0)
        y_x_1, _ = signal.lfilter(num, den, x_1, zi=zi_x_1)

        # 全响应
        y_x_ful, _ = signal.lfilter(num, den, x, zi=zi_x_1)
        return n, y_x_0, y_x_1, y_x_ful

def draw_picture():
    n, y_x_0, y_x_1, y_x_ful = stepseq(-10, 10, 1)

    plt.subplot(221)
    plt.stem(n, y_x_0)
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("ZeroState")
    plt.xlim((-10, 10))
    plt.xticks(np.arange(-10, 10, 1))
    plt.ylim((-5, 5))
    plt.yticks(np.arange(-5, 5, 1))

    plt.subplot(222)
    plt.stem(n, y_x_1)
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("ZeroInput")
    plt.xlim((-10, 10))
    plt.xticks(np.arange(-10, 10, 1))
    plt.ylim((-5, 5))
    plt.yticks(np.arange(-5, 5, 1))

    plt.subplot(223)
    plt.stem(n, y_x_ful)
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("Full")
    plt.xlim((-10, 10))
    plt.xticks(np.arange(-10, 10, 1))
    plt.ylim((-5, 5))
    plt.yticks(np.arange(-5, 5, 1))

    plt.show()

if __name__ == '__main__':
  draw_picture()

