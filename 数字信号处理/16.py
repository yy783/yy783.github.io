from math import *
import numpy as np
import matplotlib.pyplot as plt

def circonv(x1,x2,L):
 x3=np.arange(0,L)
 x3[::]=0
 x4=np.arange(0,L)
 x4[::]=0
 x3[:len(x1)]=x1[:len(x1)]
 x4[:len(x2)]=x2[:len(x2)]

 x4.shape=(L,1)
 x6=np.identity(L)

 for k in range(1,L-1):
  t=x3[k]
  x3[k]=x3[L-k]
  x3[L-k]=t
  if (k>L*0.5-1): break
 
 for k in range(0,L):
  if(k>0): x3=np.roll(x3,1)
  for t in range(0,L):
   x6[k][t]=x3[t]
 return(np.dot(x6,x4))

x1=[2,3,4,5,6,7]
x2=[2,4,5,3]
y1=np.convolve(x1, x2)

n1=range(0,9)
plt.subplot(211)
plt.stem(n1,y1)

n2=range(0,11)
plt.subplot(212)
plt.stem(n2,circonv(x1,x2,11))
plt.show()
