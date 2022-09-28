
import cv2
#########图像读取部分
cap=cv2.VideoCapture(0) #调用目录下的视频
#cap=cv2.VideoCapture(0)  #调用摄像头‘0’一般是打开电脑自带摄像头，‘1’是打开外部摄像头（只有一个摄像头的情况）
width=1280
height=960
cap.set(cv2.CAP_PROP_FRAME_WIDTH,width)#设置图像宽度
cap.set(cv2.CAP_PROP_FRAME_HEIGHT,height)#设置图像高度
#显示图像
while True: 
    ret,frame=cap.read()#读取图像(frame就是读取的视频帧，对frame处理就是对整个视频的处理)
    print(ret)#
    #######例如将图像灰度化处理，
    img=cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)#转灰度图
    cv2.imshow("img",img)
    ########图像不处理的情况
    cv2.imshow("frame",frame)    
 
    input=cv2.waitKey(20)
    if input==ord('q'):#如过输入的是q就break，结束图像显示，鼠标点击视频画面输入字符
        break
    
cap.release()#释放摄像头
cv2.destroyAllWindows()#销毁窗口
   
 
 
###########图像处理部分
img=cv2.imread("1.jpg",cv2.IMREAD_COLOR)#读入图片，后面的参数是怎么读取图片一般有灰度，全彩等
#img=cv.imread('E:\pytest\1.png')  #或者直接读取该路径下的图片
#cv2.imshow("src",img[:,:,0])
 
px=img[0,0,2]#img 第一个参数，第二个参数是像素坐标；第三个坐标是rgb三通道。取值（0，1，2）
print(px)
img[100,100]=(0,0,0)#更改指定坐标的像素
 
#con=img[0:200,0:200]#扣矩形区域的图
img=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)#转灰度图
blur=cv2.GaussianBlur(img,(5,5),0)#高斯滤波
ret3,th3=cv2.threshold(blur,0,255,cv2.THRESH_BINARY+cv2.THRESH_OTSU)#二值化
#cv2.imshow("gaussianblur",th3)
#cv2.imshow("sec",img)
#cv2.imwrite("1-1.jpg",255-img)
 
cv2.waitKey(0)