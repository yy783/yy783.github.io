import matplotlib.pyplot as plt
import numpy as np
from scipy import signal

N, wc =signal.buttord(0.2,0.3,1,15, analog=False, fs=None)
b, a = signal.butter(N, wc, btype='low', analog=False, output='ba', fs=None)
w, h = signal.freqz(b, a)
plt.plot(w, abs(h))
plt.title('Butterworth filter frequency response')
plt.xlabel('Frequency')
plt.ylabel('Amplitude')
plt.margins(0, 0.1)
plt.grid(which='both', axis='both')
plt.show()



import matplotlib.pyplot as plt
import numpy as np
from scipy import signal
from scipy.signal import filter_design

def x(n):
    y=(2*np.cos(0.5*np.pi*n)+2*np.cos(0.4*np.pi*n))*(n>=0)
    return y
N, wc =signal.buttord(0.2,0.3,1,15, analog=False, fs=None)
sos = signal.butter(N, wc, btype='low', analog=False, output='sos', fs=None)
n = np.arange(-10,20)
plt.subplot(211)
plt.stem(n,x(n))
plt.subplot(212)
filtered = signal.sosfilt(sos,x(n))
plt.stem(n,filtered)
plt.show()
