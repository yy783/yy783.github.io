import math
num = eval(input("ob"))
judge = 1
binary = 0
rangeNum = int(math.log(num,2)+1)
while judge:
    for i in range(rangeNum,0,-1):
        if num - 2**i>=0:
            num -= 2**i
            binary += 10**i
        elif num == 1 or num == 0:
            binary += num % 2
            judge = 0
        else:
            pass
else:
    print(binary)