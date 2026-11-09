i=int(input())
l=list(map(int,input().split()))
l.sort()
ln=i//2
s=0
for x in range(ln):
    s+=(l[x]+l[i-1-x])**2
print(s)
    