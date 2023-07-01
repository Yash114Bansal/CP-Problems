MOD = int(1e9+7)
def solve():
    lenth, size = map(int, input().split())
    string = input()
    l = []
    count = 0
    start = 0
    for i in range(len(string)):
        if string[i] in "aeiou":
            count += 1
        if (count == size):
            l.append(string[start:i+1])
            start = i+1
            count = 0
    l[-1] += string[start:]
    count = 1
    for i in range(1, len(l)):
        c = 0
        for j in l[i]:
            if j in "aeiou":
                break
            c+=1
        count *= c+1
    print(count%MOD)
    # print(l)


for _ in range(int(input())):
    solve()
