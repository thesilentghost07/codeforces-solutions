i=int(input())
for _ in range(i):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    if k > 1 or a == sorted(a):
        print("YES")
    else:
        print("NO")