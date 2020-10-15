import numpy as np
import matplotlib.pyplot as plt

def f(t):
    return np.exp(-t)

def g(t):
    return np.exp(t)

def h(t):
    return np.exp(0*t)

t1 = np.arange(-5.0, 5.0, 0.1)
t2 = np.arange(-5.0, 5.0, 0.1)



plt.plot(t1, f(t1), '-b',label='X(t)=e^-t')
plt.plot(t2, g(t2), '-r',label='X(t)=e^t')
plt.plot(t2, h(t2), 'g-',label='X(t)=e^0=1')
plt.legend(loc='best')

plt.xlim((-5, 5))
plt.ylim((-1,10))

plt.xlabel('t/s')
plt.ylabel('X(t)')
ax = plt.gca()                                           
ax.spines['right'].set_color('none')
ax.spines['top'].set_color('none')         
ax.xaxis.set_ticks_position('bottom')
ax.yaxis.set_ticks_position('left')         
ax.spines['bottom'].set_position(('data', 0))   
ax.spines['left'].set_position(('data', 0))
plt.title("Functional Equation:")


plt.show()