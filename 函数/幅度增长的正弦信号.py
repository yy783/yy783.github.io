import numpy as np
import matplotlib.pyplot as plt

def f(t):
    return np.exp(-t)

def g(t):
    return np.exp(t)

def h(t):
    return np.exp(0*t)

def a(t):
    return 2*np.cos(t+0.4)

def b(t):
    return 0.5*c(t)*np.cos(t+0.4)

def c(t):
    return np.exp(0.05*t)

def d(t):
    return np.exp(0.05*-t)
def e(t):
    return 0.5*d(t)*np.cos(t+0.4)


t1 = np.arange(-5.0, 5.0, 0.1)
t2 = np.arange(-5.0, 5.0, 0.1)
t3 = np.arange(-50, 50, 0.1)

   

ax = plt.gca()
plt.plot(t3, b(t3), 'r-')

plt.xlim((-20, 50))
plt.ylim((-5, 5))

plt.xlabel('t/s')
plt.ylabel('X(t)')

ax.spines['right'].set_color('none')
ax.spines['top'].set_color('none')         
ax.xaxis.set_ticks_position('bottom')
ax.yaxis.set_ticks_position('left')          
ax.spines['bottom'].set_position(('data', 0))   
ax.spines['left'].set_position(('data', 0))
plt.title("0.5*e^(t)*cos(t+0.4)")
     




plt.show()