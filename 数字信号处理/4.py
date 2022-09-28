import numpy as np
import matplotlib.pyplot as plt

def stepseq(N, n1, n2):
    fic = 0
    if (n2 < n1):
        print("error!!!")
    else:
        n = np.arange(n1, n2, 1)
        z = np.double(2 * np.cos(0.25 * np.pi * n) + 3 * np.sin(0.3 * np.pi * n))
        x = []
        for i in z:
            fic += 1
            if fic <= 40 * N:
                x.append(i)
            else:
                x.append(0)
        return x, n


def draw_picture():
    x, n = stepseq(5, -100, 101)

    plt.stem(n, x)
    plt.xlabel("Time index n")
    plt.ylabel("Amplitude")
    plt.title("3190432115")
    plt.axis([-100, 100, -8, 8])

    plt.show()


if __name__ == '__main__':
    draw_picture()
