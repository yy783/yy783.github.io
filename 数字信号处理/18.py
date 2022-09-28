import matplotlib.pyplot as plt
import numpy as np
from numpy.core.function_base import linspace
from scipy import signal
plt.rcParams['font.sans-serif']=['SimHei'] 
plt.rcParams['axes.unicode_minus']=False 


a=5
T=1/(10*10**6)
fs=200*10**6
t=linspace(0,a*T,int(a*T*fs))
x1=np.cos(2*np.pi*a*10*10**6*t)
x2=np.cos(2*np.pi*20*10**6*t)
xn=x1+x2

Xk=np.fft.fft(xn)
freq = np.fft.fftfreq(len(xn),d=1/(fs))
plt.subplot(211)
plt.title('x(n)')
plt.stem(t,xn) 
plt.subplot(212)
plt.title('X(k)')  
plt.plot(freq,abs(Xk))
plt.show()
