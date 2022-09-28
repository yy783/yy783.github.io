import numpy as np # 科学计算
import matplotlib.pyplot as plt # 画图工具
import scipy.signal as sg 
 
B = 1 # 信号带宽
wc = B # 滤波器截止频率      
Ts = np.pi/B # 采样间隔  
ws = 2*np.pi/Ts # 采样角频率  
N = 100 # 滤波器时域采样点数  
n = np.arange(-N,N+1)
nTs = n *Ts # 采样数据的采样时间
fs = np.cos(nTs/np.pi) # 函数的采样点  

# Nyquist 抽样信号  
plt.figure(figsize=(10,3))
plt.stem(t[::100], np.sinc(t/np.pi)[::100], '-',label='f1', markerfmt='C3o', use_line_collection=True)
plt.ylabel(r'$f(kT_S)$')
plt.xlabel(r'$kT_S$')
plt.title(r'$Sa(t) = sinc(t/\pi)$')
plt.show()
                                                