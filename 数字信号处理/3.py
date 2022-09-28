import numpy as np
import matplotlib.pyplot as plt

def stepseq(a, w, n1, n2):
    if (n2 < n1):
        print("error!!!")
    else:
        n = np.arange(n1, n2, 1)
        x = np.exp((complex(a, w)) * n)

        return x, n


def draw_picture():
    x, n = stepseq(0.2, 0.3, -1, 26)

    plt.subplot(221)
    plt.stem(n, np.real(x))
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("real")

    plt.subplot(222)
    plt.stem(n, np.imag(x))
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("image")

    plt.subplot(223)
    plt.stem(n, np.abs(x))
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("abs")
    plt.axis([-1, 25, -20, 90])
    plt.show()


if __name__ == '__main__':
    draw_picture()
