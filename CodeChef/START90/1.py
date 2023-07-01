def solve(arr):
    n = len(arr)
    for i in range(n - 2):
        for j in range(i + 1, n - 1):
            for k in range(j + 1, n):
                subarray = [arr[i], arr[j], arr[k]]
                print(subarray)
