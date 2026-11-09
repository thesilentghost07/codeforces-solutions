i=int(input())
for _ in range(i):
    a,b=map(int,input().split())
    if a>b:
        print(min(b,a-b))
    else:
        print(-1)