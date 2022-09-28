import numpy as np
import matplotlib.pyplot as plt

def stepseq(n_x, n0, n1, n2):
    if (n0 < n1) and (n0 > n2) and (n2 < n1):
        print("error!!!")
    else:
        if n_x >= 1:
            a = np.arange(n_x * n1 + n0, n_x * n2 + n0, 1)
        else:
            a = np.arange(n_x * n2 + n0, n_x * n1 + n0, 1)
        n = np.arange(n1, n2, 1)
        x = []
        for i in a:
            if i < -2:
                x.append(0)
            elif i < 0:
                x.append(-4 - 2 * i)
            elif i < 4:
                x.append(-4 + 3 * i)
            elif i < 8:
                x.append(16 - 2 * i)
            else:
                x.append(0)
        return x, n


def draw_picture():
    plt.subplot(221)
    x, n = stepseq(1, 0, -17, 18)
    plt.stem(n, x)
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("Image")
    plt.axis([-17, 17, -10, 12])

    plt.subplot(222)
    x_2, n_2 = stepseq(1, 3, -17, 18)
    plt.stem(n_2, x_2)
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("Image")
    plt.axis([-17, 17, -10, 12])

    plt.subplot(223)
    x_3, n_3 = stepseq(-1, -3, -17, 18)
    plt.stem(n_3, x_3)
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("Image")
    plt.axis([-17, 17, -10, 12])

    plt.show()

if __name__ == '__main__':
    draw_picture()


