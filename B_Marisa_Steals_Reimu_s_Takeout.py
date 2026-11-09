t = int(input())
for _ in range(t):
    n = int(input())
    p = list(map(int, input().split()))
    c=p.count(0)
    c1=p.count(1)
    c2=p.count(2)
    if c1>c2:
        x=c+c2+((c1-c2)//3)
    else:
        x=c+c1+((c2-c1)//3)
    print(x)