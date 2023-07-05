MOD = int(1e9) + 7


def nC2(n):
    return n * (n - 1) // 2


def solve():
    len, query = map(int, input().split())
    array = list(map(int, input().split()))
    array.sort()
    answer = []
    for i in range(len):
        if len - i == 3:
            answer.append(min(array[len - 1], min(array[len - 2], array[len - 3])))
            break
        out = len - i - 1
        times = nC2(out)
        # for j in range(times):
        #     answer.append(array[i])
        tl = []

        answer+= [array[i]]*times

    for i in range(query):
        temp = int(input())
        print(answer[temp - 1])


T = int(input())
while T > 0:
    solve()
    T -= 1
