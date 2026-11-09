import math
i=int(input())
for _ in range(i):
    a, b,c= map(int, input().split())
    f=False
    r=[]
    for j in range(1,c+1):
        sq=c*c-j*j
        if sq<0:
            break
        y=int(math.sqrt(sq))
        if y*y==sq:
            r.append("{} {}".format(j,y))
            f=True
            break
    if f:
        print(*r)