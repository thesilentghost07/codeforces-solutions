i=int(input())
for _ in range(i):
    n,k=map(int,input().split())
    ar=input().strip()
    c=ar[:k].count('W')
    x=c
    for i in range(k,n):
        if ar[i]=='W':
            c+=1
        if ar[i-k]=='W':
            c-=1
        x=min(x,c)
    print(x)