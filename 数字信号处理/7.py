import matplotlib.pyplot as plt

import numpy as np
from scipy import signal

nmin = -10
nmax = 10
n=np.arange(nmin,nmax+1,1)

def u(n):
    r = np.where(n>=0.0,1.0,0.0)
    return r

n=np.flipud(n)
y =(2*n-1)*(u(n+3) - u(n-5))

plt.stem(n,y)
plt.show()
