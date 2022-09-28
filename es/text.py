import  cv2

from tkinter import *

def kai():

 cap = cv2.VideoCapture(0)

 face_cascade = cv2.CascadeClassifier("D:\\yyhp\\sx\\haarcascade_frontalface_alt2.xml")#加入人脸识别模块cv2.CascadeClassifier是opencv中做人脸检测的时候的一个级联分类器

 print(face_cascade)

 i = 0
 num = 0
 while(True):
    ret,frame = cap.read()#这是read（）函数的返回值，ret返回为true或者false代表有没有读取到图片，frame表示截取的一帧图片
    gray = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)#灰度化
    faces = face_cascade.detectMultiScale(gray, 1.3, 5)#检测人脸
    for (x, y, w, h) in faces:
        cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)#用rectangle（）画一个矩形
       
        i +=1

        cv2.imwrite('D:/sp/' + str(i) + '.jpg',frame)
        num += 1

        font = cv2.FONT_HERSHEY_SIMPLEX  # 获取内置字体
        cv2.putText(frame, ('%d' % num), (x + 30, y + 30), font, 1, (255, 0, 255), 4)

    if num > 199:# 超过指定最大保存数量则退出循环
        break

    cv2.imshow("camera",frame)

    if cv2.waitKey(1)  == 27:#waitkey是在给定时间内等待用户的按键事件，esc的Ascll码为27，延迟时间为1ms，显示视频的时候延迟时间必须大于0
        break

 cap.release()
 cv2.destroyAllWindows()

root = Tk(className='监控')
root.geometry('400x200')

Label = Label(root)
Label.pack()

Button1 = Button(root)
Button1['text'] = '开启监控'
Button1['command'] = kai
Button1.pack()

root.mainloop()