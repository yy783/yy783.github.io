from math import *
import numpy as np
import matplotlib.pyplot as plt
from scipy import signal

plt.rcParams['font.sans-serif']=['SimHei'] 
plt.rcParams['axes.unicode_minus']=False 

def wn_k(k,n,N):
    return complex(cos(2*pi*n*k/N),sin(-2*pi*n*k/N))

Xk=[]

def mydft(xn,N):
 for k in range(0,N):
    sums=0
    for n in range(0,N):
        sums=sums+np.cos(n)*wn_k(k,n,N)
    Xk.append(sums)
 return Xk

n=np.arange(6)
x=np.cos(n*np.pi)

ws,h=signal.freqz(x,whole=True)

plt.subplot(211)
plt.title("DFT(xn)")
plt.stem(np.abs(mydft(x,5)))

plt.subplot(212)
plt.title("xn")
plt.stem(n,x)

plt.show()
