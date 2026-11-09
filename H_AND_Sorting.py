t = int(input())

for _ in range(t):
    n = int(input())
    p = list(map(int, input().split()))

    ans = (1 << 30) - 1
    for i in range(n):
        if p[i] != i:
            ans &= p[i] & i

    print(ans)