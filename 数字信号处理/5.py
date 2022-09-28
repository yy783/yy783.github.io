import numpy as np
import matplotlib.pyplot as plt

def stepseq(n0, n1, n2):
    if (n0 < n1) and (n0 > n2) and (n2 < n1):
        print("error!!!")
    else:
        a = np.arange(n1-n0, n2-n0, 1)
        n = np.arange(n1, n2, 1)
        x = 2 * a
        print(x)
        return x, n


def draw_picture():
    x, n = stepseq(5, 0, 21)

    plt.stem(n, x)
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("Image")
    plt.axis([0, 20, -10, 40])
    plt.show()


if __name__ == '__main__':
    draw_picture()
