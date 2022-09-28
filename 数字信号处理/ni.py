import numpy as np

A = np.matrix([[120000,40000,20000,0],[40000,240000,0,20000],[20000,0,40000,0]][0,20000,0,40000])
B = np.array([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16]).reshape((4,4))
print(A)
print(B)
print("*" * 50)
print(np.linalg.inv(A))
print(np.linalg.inv(B))
