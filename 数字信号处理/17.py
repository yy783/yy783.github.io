import matplotlib.pyplot as plt
import numpy as np
from scipy import signal
plt.rcParams['font.sans-serif']=['SimHei'] 
plt.rcParams['axes.unicode_minus']=False 

a=5
fs=150*10**6
f=15*10**6 
T=1.0/f
t=np.linspace(0,a*T,int(a*T*fs))
xn=np.cos(2*np.pi*f*t)

Xk=np.fft.fft(xn)
freq = np.fft.fftfreq(len(xn),d=1/(fs))
plt.subplot(211)
plt.title('x(n)')
plt.stem(t,xn) 
plt.subplot(212)
plt.title('X(k)')  
plt.plot(freq,abs(Xk))
plt.show()
