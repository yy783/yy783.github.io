import matplotlib.pyplot as plt
import numpy as np
from numpy.core.function_base import linspace
from numpy.core.records import array
from scipy import signal
plt.rcParams['font.sans-serif']=['SimHei'] 
plt.rcParams['axes.unicode_minus']=False 

def R(n):
    x=np.arange(n)
    x[:]=1
    return x
nmax=15
n=np.arange(nmax)
x1=[1,3,2,4,6]
x2=(2*n-3)*R(len(n))
yc=signal.convolve(x1,x2)
L=len(x1)+nmax-1
x1=np.pad(x1,(0,L-len(x1)))
x2=np.pad(x2,(0,L-len(x2)))
Xk1=np.fft.fft(x1)
Xk2=np.fft.fft(x2)
yn=np.fft.ifft(Xk1*Xk2)

N=np.arange(L)
plt.subplot(211)
plt.title('FFT')
plt.stem(N,yn) 
plt.subplot(212)
plt.title('线性卷积')  
plt.stem(N,yc)
plt.show()
