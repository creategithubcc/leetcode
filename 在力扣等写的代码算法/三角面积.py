import math
while True:
    try:
        aa,bb,aa2,bb2,aa3,bb3=map(int,input().strip().split(' '))
        a=math.sqrt((aa2-aa)**2+(bb2-bb)**2)#**2是2次方的意思
        b=math.sqrt((aa3-aa2)**2+(bb3-bb2)**2)
        c=math.sqrt((aa-aa3)**2+(bb-bb3)**2)
        p=(a+b+c)/2
        S=math.sqrt(p*(p-a)*(p-b)*(p-c))
        print("%0.2f" %S)
    except EOFError:
        break
