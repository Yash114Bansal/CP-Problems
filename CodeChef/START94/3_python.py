def solve():
    len, to_find = map(int, input().split())
    and_all = -1
    for temp in map(int, input().split()):
        if temp > to_find and (temp & to_find) >= to_find:
            and_all &= temp
        elif temp == to_find:
            print("YES")
            return
    if and_all == to_find:
        print("YES")
    else:
        print("NO")
for _ in range(int(input())):
    solve()