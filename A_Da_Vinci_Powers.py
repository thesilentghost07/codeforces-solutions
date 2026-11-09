a = int(input())
ans = 2**a
if a >= 13:
    ans -= 100 * (2 ** (a - 13))
print(ans)