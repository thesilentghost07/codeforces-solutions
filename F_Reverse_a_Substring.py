
def sol():
    t=int(input())
    s=input()

    for i in range(t-1) :
        if s[i]>s[i+1]:
            print("YES")
            print(i+1,i+2)
            return
    print("NO")
sol()

