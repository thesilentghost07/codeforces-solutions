i=int(input())
for _ in range(i):
    s=input()
    inc = False
    dec = False
    for i in range(1,len(s)-1):
        if s[i-1]==s[i]==s[i+1]:
            inc =True
        elif s[i-1]==s[i+1] and s[i]!=s[i-1]:
            dec = True
    ans = 0
    if inc:
        ans += 1
    if dec:
        ans += 1
    print(ans+1)