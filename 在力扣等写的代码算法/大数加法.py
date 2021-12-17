import math
while True:
    try:
        a,b=input().split(' ')#默认字符串
        a=int(a)
        b=int(b)
        c=int(a+b)
        print(c)
    except EOFError:
        break
