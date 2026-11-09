i=int(input())
for _ in range(i):
    x=int(input())
    x=str(x)
    if int(x[:2])==10 and int(x)>=3:
        if int(x[2:])>2 and int(x[2:])!=0:
            print("yes")
        else:
            print("no")
    else:
        print("no")