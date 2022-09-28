import matplotlib.pyplot as plt

import numpy as np
from scipy import signal


nmin = -10
nmax = 10
n=np.arange(nmin,nmax+1,1)

def u(n):
    r = np.where(n>=0.0,1.0,0.0)
    return r

x = (n+1)*(u(n)-u(n-5))

y = (n-1)*(u(n+2)-u(n-5))

z = signal.convolve(np.array(x), np.array(y), mode='same')

plt.stem(n, z)
