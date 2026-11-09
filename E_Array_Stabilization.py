i=int(input())
a=list(map(int,input().split()))
a.sort()
# mx=l.index(max(l))
# del l[mx]
ans = min(a[-1] - a[1], a[-2] - a[0])
print(ans)