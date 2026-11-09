t=int(input())
l=list(map(int,input().split()))
l1=0
l2=[]
for i in range(1,t):
    if l[i-1]==l[i]==1:
        l1+=1
    else:
        l2.append(l1)
        l1=1
l2.append(l1)
ans = 0
for i in range(len(l2) - 1):
    ans = max(ans, 2* min(l2[i],l2[i+1]))
    
print(ans)