from cmath import cos
from tkinter import *


def hanshu1():
    k=1
    k=2
    a=1
    import numpy as np
    import matplotlib.pyplot as plt
    plt.cla()



    def a(t):
        return 2*np.cos(t+0.4)
    

    def b(t):
        return 0.5*cos(t)*np.cos(t+0.4)
    


    def d(t):
        return np.exp(0.05*-t)
    
    def e(t):
        return 0.5*d(t)*np.cos(t+0.4)

    

    t1 = np.arange(-5.0, 5.0, 1)
    t2 = np.arange(-5.0, 5.0, 1)
    t3 = np.arange(-50, 50, 1)
    ax = plt.gca()
    plt.stem(t3, e(t3), 'g-')

    plt.xlim((-50, 20))
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

def hanshu2():
    import numpy as np
    import matplotlib.pyplot as plt
    plt.cla()


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


    t1 = np.arange(-5.0, 5.0, 1)
    t2 = np.arange(-5.0, 5.0, 1)
    t3 = np.arange(-50, 50, 1)

    ax = plt.gca()
    plt.stem(t3, b(t3), 'r-')

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

def hanshu3():
    import numpy as np
    import matplotlib.pyplot as plt
    plt.cla()


    x = np.arange(-10.0, 10.0, 1)
    y1 = np.sin(x)

    plt.xlim((-5, 5))
    plt.ylim((-1,10))


    plt.figure(1)
    plt.subplot(211)
    plt.stem(x, y1)

    plt.title("x(t)=Acos(wt+ψ)")

    plt.show()

def hanshu4():
    import numpy as np
    import matplotlib.pyplot as plt
    plt.cla()


    def f(t):
        return np.exp(-t)

    t1 = np.arange(-5.0, 5.0, 1)


    plt.stem(t1, f(t1), '-b',label='X(t)=e^-t')
   
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
    plt.title("x(t)")

    plt.show()

root = Tk(className='函数')
root.geometry('400x200')

Label = Label(root)
Label.pack()

Button1 = Button(root)
Button1['text'] = '振幅增大的正弦信号'
Button1['command'] = hanshu1
Button1.pack()

Button2 = Button(root)
Button2['text'] = '振幅减小的正弦信号'
Button2['command'] = hanshu2
Button2.pack()

Button3 = Button(root)
Button3['text'] = '        正弦信号       '
Button3['command'] = hanshu3
Button3.pack()

Button4 = Button(root)
Button4['text'] = '        指数信号       '
Button4['command'] = hanshu4
Button4.pack()

root.mainloop()
