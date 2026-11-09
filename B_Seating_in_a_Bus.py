i=int(input())
for _ in range(i):
    n=int(input())
    a=list(map(int,input().split()))
    lef=a[0]
    Rig=a[0]
    t=True
    for seat in a[1:]:
        if seat==lef-1:
            lef-=1
        elif seat==Rig+1:
            Rig+=1
        else:
            t=False
            break
    if t:
        print("YES")
    else:    
        print("NO")