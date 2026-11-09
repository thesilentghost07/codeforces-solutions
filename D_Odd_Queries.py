i=int(input())
for _ in range(i):
    n,q=map(int,input().split())
    arr=list(map(int,input().split()))
    ar=[0]*(n+1)
    ar = [0]*(n+1)
    for j in range(n):
        ar[j+1] = ar[j] + arr[j]
    s=ar[n]
    for j in range(q):
        l,r,k=map(int,input().split())
        nsum=s-(ar[r]-ar[l-1])+(r-l+1)*k
        if nsum%2==0:
            print("NO")
        else:
            print("YES")