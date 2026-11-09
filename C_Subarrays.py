i=int(input())
for _ in range(i):
    n,k=map(int,input().split())
    ar=list(map(int,input().split()))
    P = [0]*(n+1)
    ans=0
    for i in range(n):
        P[i+1] = (P[i] + ar[i])%k
    f= [0]*k
    ans = 0
    for r in range(k+1,n+1):
        f[P[r-k-1]] += 1
        ans += f[P[r]]
    print(ans)