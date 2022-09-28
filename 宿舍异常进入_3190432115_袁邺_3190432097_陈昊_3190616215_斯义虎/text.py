import  cv2

from tkinter import *

def kai():

 cap = cv2.VideoCapture(0)

 face_cascade = cv2.CascadeClassifier("D:\\yyhp\\sx\\haarcascade_frontalface_alt2.xml")

 print(face_cascade)

 i = 0
 num = 0
 while(True):
    ret,frame = cap.read()
    gray = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
    faces = face_cascade.detectMultiScale(gray, 1.3, 5)
    for (x, y, w, h) in faces:
        cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)
       
        i +=1

        cv2.imwrite('D:/sp/' + str(i) + '.jpg',frame)
        num += 1

        font = cv2.FONT_HERSHEY_SIMPLEX  
        cv2.putText(frame, ('%d' % num), (x + 30, y + 30), font, 1, (255, 0, 255), 4)

    if num > 199:
        break

    cv2.imshow("camera",frame)

    if cv2.waitKey(1)  == 27:
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