for i in range(int(input())):
    total = int(input())
    array = list(map(int,input().split()))
    array.sort()
    sub = 1
    for i in array:
        sub = max(sub,array.count(i))
    print(total-sub)