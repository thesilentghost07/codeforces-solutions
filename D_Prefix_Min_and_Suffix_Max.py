k = int(input())
for _ in range(k):
    n=int(input())
    a =list(map(int, input().split()))
    # for i in range(n):
    #     x=1
    #     p=i
    #     mn=min(arr[:p+1])
    #     mx=max(arr[p:])
        # if n-i==2:
        #     mn=min(mn,arr[p])
        #     mx=max(mx,arr[p])
        # if n-i==3:
        #     mn=min(mn,arr[p+1])
        #     mx=max(mx,arr[p+1])
        #     x=0
        # print(x,end="")
    pmin=[0]*n
    pmax = [0] * n
    pmin[0] = pmax[0] = a[0]
    for i in range(1, n):
        pmin[i] = min(pmin[i - 1], a[i])
        pmax[i] = max(pmax[i - 1], a[i])
    smin = [0] * n
    smax = [0] * n
    smin[-1] = smax[-1] = a[-1]
    for i in range(n -2,-1,-1):
        smin[i] = min(smin[i + 1], a[i])
        smax[i] = max(smax[i + 1], a[i])
    ans = []
    for i in range(n):
        if a[i] == pmin[i] or a[i] == pmax[i] or a[i] == smin[i] or a[i] == smax[i]:
            ans.append("1")
        else:
            ans.append("0")

    print("".join(ans))

 