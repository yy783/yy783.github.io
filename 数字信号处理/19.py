import matplotlib.pyplot as plt
import numpy as np
from numpy.core.function_base import linspace
from scipy import signal
plt.rcParams['font.sans-serif']=['SimHei'] 
plt.rcParams['axes.unicode_minus']=False 

a=5
f=20*10**6 
T=1.0/f
fs=150*10**6 
t=np.linspace(0,a*T,int(a*T*fs))
xn=np.cos(2*np.pi*f*t)
yn=np.random.rand(len(t))
xn0=xn+yn

plt.figure(1)
Xk=np.fft.fft(xn0)
freq = np.fft.fftfreq(len(xn0),d=1/(fs))
plt.subplot(211)
plt.title('x(n)')
plt.stem(t,xn0) 
plt.subplot(212)
plt.title('X(k)')  
plt.plot(freq,abs(Xk))

plt.figure(2)
Yk=np.fft.fft(yn)
freq = np.fft.fftfreq(len(yn),d=1/(fs))
plt.subplot(211)
plt.title('y(n)')
plt.stem(t,yn) 
plt.subplot(212)
plt.title('Y(k)')  
plt.plot(freq,abs(Yk))
plt.show()
