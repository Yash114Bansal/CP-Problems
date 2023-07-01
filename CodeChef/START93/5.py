def is_palindrome(num):
    return str(num) == str(num)[::-1]
def solution(array):
    count = 0
    l = len(array)
    for i in range(l):
        for j in range(i,l):
            if(is_palindrome(array[i]^array[j])):
                count+=1
    return count 
for _ in range(int(input())):
    input()
    p = [x for x in map(int ,input().split())]
    print(solution(p))