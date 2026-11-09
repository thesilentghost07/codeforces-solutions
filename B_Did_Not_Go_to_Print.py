import string
i=int(input())
for _ in range(i):
    n=int(input())
    x=input()
    ar=list(x)
    l=[]
    arr=[False]*(n+1)
    a1=0
    for ind, ch in enumerate(x,1):
        if ch=='1':
            l.append(ind)
        elif ch == "2":
            if l:
                d = l.pop()
                arr[d] = True
            else:
                arr[ind] = True
        elif ch == "3":
            arr[ind] = True
    p = [i for i in range(1, n + 1) if not arr[i]]
    print(len(p))
    print(*p)


