import numpy as np
import matplotlib.pyplot as plt

def f(t):
    return np.exp(-t)


t1 = np.arange(-5.0, 5.0, 0.1)
t2 = np.arange(-5.0, 5.0, 0.1)


plt.figure(2)           
plt.subplot(221)     
plt.plot(t1, f(t1), 'b-')
#设置坐标轴范围
plt.xlim((-5, 5))
plt.ylim((-1,10))

#设置坐标轴名称
plt.xlabel('t/s')
plt.ylabel('X(t)')
#设置坐标轴刻度
ax = plt.gca()                                           

ax.xaxis.set_ticks_position('bottom')
ax.yaxis.set_ticks_position('left')          # 指定下边的边作为 x 轴   指定左边的边为 y 轴
ax.spines['bottom'].set_position(('data', 0))   #指定 data  设置的bottom(也就是指定的x轴)绑定到y轴的0这个点上
ax.spines['left'].set_position(('data', 0))
plt.title("Functional Equation:ω=0,σ=-1,X(t)=e^-t")



plt.show()