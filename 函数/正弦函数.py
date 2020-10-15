# -*- coding: utf-8 -*-
import numpy as np
import matplotlib.pyplot as plt
from pylab import *

x = np.arange(-10.0, 10.0, 0.01)
y1 = np.sin(x)

plt.xlim((-5, 5))
plt.ylim((-1,10))


plt.figure(1)
plt.subplot(211)
plt.plot(x, y1)

plt.title("x(t)=Acos(wt+ψ)")



plt.show()