def formula(x, y):
    return x ^ int(x/(2**y))


for i in range(int(input())):
    l = int(input())
    x = int(input(), 2)
    maxx = 0
    result = 0
    for y in range(l+1):
        temp = formula(x, y)
        if (temp > maxx):
            maxx = temp
            result = y

    print(result)
