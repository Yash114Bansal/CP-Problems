from math import ceil
for i in range(int(input())):
    length, window = map(int, input().split())
    subarrays = ceil(length/window)

    array = []
    for i in range(subarrays):
        array.append([])
    start = 1
    for k in range(window//2):
        for i in range(subarrays):
            array[i].append(start)
            array[i].append(length+1-start)
            start += 1

    if (window & 1):
        to_add = 2*length
        to_obtain = 10*length
        sum1 = sum(array[1])
        for i in array:
            i[-1] = to_add
            i.append(to_obtain-sum1)
            sum1 += 2
            to_add += 1

    for j in array:
        for i in j:
            print(i, end=" ")
    print()
