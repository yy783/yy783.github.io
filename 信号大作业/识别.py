import  cv2
import  random
import os  # 引入操作系统模块
import easygui as g  # 引入图形用户界面


def search(path1, name):
    Allfiles = []  # 创建队列
    Allfiles.append(path1)

    while len(Allfiles) != 0:  # 当队列中为空的时候跳出循环
        path = Allfiles.pop(0)  # 从队列中弹出首个路径
        if os.path.isdir(path):  # 判断路径是否为目录
            ALLFilePath = os.listdir(path)  # 若是目录，遍历将里面所有文件入队
            for line in ALLFilePath:
                newPath = path + "\\" + line  # 形成绝对路径
                Allfiles.append(newPath)
        else:  # 如果是一个文件，判断是否为目标文件
            target = os.path.basename(path)
            if target == name:
                return path
    return -1



path = g.enterbox(msg='请输入文件目录(如:D:xx)如需打开摄像头，请随便输入')
name = g.enterbox(msg='请输入您要查找的文件名(如：xx.mp4)如需打开摄像头请点OK: ')
answer = search(path, name)




if answer == -1:
    g.msgbox("摄像头已打开")



else:
    g.msgbox(answer, '返回路径')
    cap = cv2.VideoCapture(answer)



save_path ="D:\.es"

face_cascade = cv2.CascadeClassifier("D:\\yyhp\\es\\haarcascade_frontalface_alt2.xml")#加入人脸识别模块
i = 0
num = 0
while(True):
    ret,frame = cap.read()
    gray = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)#灰度化
    faces = face_cascade.detectMultiScale(gray, 1.3, 5)
    for (x, y, w, h) in faces:
        cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)
        roiImg = frame[y:y+h,x:x+w]
        i +=1
        gray = cv2.cvtColor(roiImg, cv2.COLOR_BGR2GRAY)
        cv2.imwrite(save_path + str(i) + '.jpg',frame)
        num += 1

        font = cv2.FONT_HERSHEY_SIMPLEX  # 获取内置字体
        cv2.putText(frame, ('%d' % num), (x + 30, y + 30), font, 1, (255, 0, 255), 4)

    if num > 19:# 超过指定最大保存数量则退出循环
        break




    cv2.imshow("camera",frame)



    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()

j=0
while j<3:
    s=random.randint(1,21)
    filename=".//"
    j+=1
    e=(".//%s.jpg"%s)
    src=cv2.imread(e)

    cv2.namedWindow("%s"%s,cv2.WINDOW_AUTOSIZE)

    cv2.imshow("%s"%s,src)

cv2.waitKey(0)
cv2.destroyAllWindows()

input("please input any key to exit!")