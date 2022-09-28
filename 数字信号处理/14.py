import numpy as np
import matplotlib.pyplot as plt

import numpy as np
import matplotlib.pyplot as plt

nmin = -10
nmax = 10
n=np.arange(nmin,nmax+1)

def u(n):
    r = np.where(n>=0.0,1.0,0.0)
    return r

n=np.flipud(n)

x = (2*n-1)*(u(n)-u(n-15))

plt.subplot(311)
plt.stem(n,x)

y1 = np.roll(x,5)
plt.subplot(312)
plt.stem(n,y1)

y2 = np.roll(x,-5)
plt.subplot(313)
plt.stem(n,y2)
plt.show()