import math
i=int(input())
for _ in range(i):
    n=int(input())
    p=0
    while n>=2:
        h=(math.sqrt(1+24*n)-1)//6
        c=(3*h**2+h)//2
        n-=c
        p+=1
    print(p)