import numpy as np
import matplotlib.pyplot as plt

def stepseq(n0, n1, n2):
    if (n0 < n1) and (n0 > n2) and (n2 < n1):
        print("error!!!")
    else:
        n = np.arange(n1, n2, 1)
        x = []
        for i in n:
            if i >= 0 and i <= (n0-1):
                x.append(1)
            else:
                x.append(0)
        print(x)
        return x, n


def draw_picture():
    x, n = stepseq(5, -10, 21)

    plt.stem(n, x)
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("Image")
    plt.axis([-10, 20, 0, 1.2])
    plt.show()


if __name__ == '__main__':
    draw_picture()
