def coltoname(col):
    r = []
    while col > 0:
        re=col%26
        if re == 0:
            r.append("Z")
            col = (col // 26) - 1
        else:
            r.append(chr(re+64))
            col=col//26
    return "".join(reversed(r))

def nametocol(name):
    res = 0
    for ch in name:
        res = res * 26 + (ord(ch)- 64)
    return res

def yes(s):
    if s[0] == "R" and s[1].isdigit():
        c_pos = s.find("C")
        if c_pos != -1 and c_pos > 1 and s[c_pos + 1].isdigit():
            return True
    return False

n = int(input())
for _ in range(n):
    s = input().strip()
    if yes(s):
        c_pos = s.find("C")
        row = s[1:c_pos]
        col = int(s[c_pos + 1 :])
        print(f"{coltoname(col)}{row}")
    else:
        i = 0
        while i < len(s) and s[i].isalpha():
            i += 1
        coll= s[:i]
        row = s[i:]
        colnum = nametocol(coll)
        print(f"R{row}C{colnum}")
