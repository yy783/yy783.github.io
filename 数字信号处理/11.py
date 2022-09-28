import matplotlib.pyplot as plt
import numpy as np
from scipy import signal


def stepseq(n1, n2, N):
    if (n2 < n1):
        print("error!!!")
    else:
        den = np.array([1.0, 0.35, -0.8])
        num = np.array([2.5, -1.8, 0])

        y_0 = np.array([0, 0])
        n = np.arange(n1, n2 + 1, 1)
        # n = np.arange(-3, 4, 1)
        x = (0.5 * N) ** n * (n >= 0)
        x_1 = (0.5 * N) ** (n + 1) * ((n + 1) >= 0)
        x_2 = 2 * (0.5 * N) ** n * (n >= 0)
        y = n >= 0
        y_2 = 2 * (n >= 0)
        # print(x)
        zi_x_1 = signal.lfiltic(num, den, y_0)

        # 原全响应
        y_x_ful, _ = signal.lfilter(num, den, x, zi=zi_x_1)

        # n = n + 1
        y_x_ful_1, _ = signal.lfilter(num, den, x_1, zi=zi_x_1)

        # n = 2 * n
        y_x_ful_2, _ = signal.lfilter(num, den, x_2, zi=zi_x_1)

        # n' = n'
        y_x_ful_y, _ = signal.lfilter(num, den, y, zi=zi_x_1)

        # n' = 2 * n'
        y_x_ful_y_2, _ = signal.lfilter(num, den, y_2, zi=zi_x_1)

        # n = 2 * n + 2 * n'
        y_x_ful_2n2n, _ =signal.lfilter(num, den, y_2 + x_2, zi=zi_x_1)


        return n, y_x_ful, y_x_ful_1, y_x_ful_2, y_x_ful_y, y_x_ful_y_2, y_x_ful_2n2n

def draw_picture():
    n, y_x_ful, y_x_ful_1, y_x_ful_2, y_x_ful_y, y_x_ful_y_2, y_x_ful_2n2n = stepseq(-10, 10, 1)

    plt.subplot(221)
    plt.stem(n, y_x_ful)
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("Original")
    plt.xlim((-10, 10))
    plt.xticks(np.arange(-10, 10, 1))
    plt.ylim((-5, 5))
    plt.yticks(np.arange(-5, 5, 1))

    plt.subplot(222)
    plt.stem(n, y_x_ful_1)
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("n = n + 1")
    plt.xlim((-10, 10))
    plt.xticks(np.arange(-10, 10, 1))
    plt.ylim((-5, 5))
    plt.yticks(np.arange(-5, 5, 1))

    plt.subplot(223)
    plt.stem(n, y_x_ful_2n2n)
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("n = 2 * n' + 2 * n")
    plt.xlim((-10, 10))
    plt.xticks(np.arange(-10, 10, 1))
    plt.ylim((-20, 20))
    plt.yticks(np.arange(-20, 20, 1))

    plt.subplot(224)
    plt.stem(n, 2 * y_x_ful_y + 2 * y_x_ful)
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("n = 2 * Y + 2 * Y'")
    plt.xlim((-10, 10))
    plt.xticks(np.arange(-10, 10, 1))
    plt.ylim((-20, 20))
    plt.yticks(np.arange(-20, 20, 1))

    plt.show()

if __name__ == '__main__':
  draw_picture()
