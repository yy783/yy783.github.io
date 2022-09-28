import cv2

cap = cv2.VideoCapture(0,cv2.CAP_DSHOW)
face = cv2.CascadeClassifier(r'D:\\yyhp\\信号大作业\\haarcascade_frontalface_default.xml')
while(1):

    ret,frame = cap.read()
    gray = cv2.cvtColor(frame,cv2.COLOR_RGB2GRAY)
    faces = face.detectMultiScale(gray,1.1,3,0,(200,100))
    for (x,y,w,h) in faces:
      img = cv2.rectangle(frame,(x,y),(x+w,y+h),(255,255,0),2)
      gray_roi = gray[y:y+h,x:x+h]
      eyes = eye.detectMultiScale(gray_roi,1.02,3,0,(50,50))
      for (ex,ey,ew,eh) in eyes:
        cv2.rectangle(img,(x+ex,y+ey),(x+ex+ew,y+ey+eh),(0,255,0),2)
    smiles = smile.detectMultiScale(gray,1.1,3,0,(100,100))
    for (sx,sy,sw,sh) in smiles:
      cv2.rectangle(frame,(sx,sy),(sx+sw,sy+sh),(0,255,255),2)
    
    cv2.imshow('frame',frame)

    if cv2.waitKey(1) == 27:
       break
cap.release()
cv2.destroyAllWindows()