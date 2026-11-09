i=int(input())
for _ in range(i):
    n=input()
    if len(n) >=3 and n[:2]=="10" and n[2]!='0' and int(n[2:]) >= 2:
        print("YES")
    else:
        print("NO") 

