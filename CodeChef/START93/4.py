def is_palindrome(num):
    if not num:
        return True
    return str(num) == str(num)[::-1]

def count_palindrome_pairs(arr):
    count = 0
    xor_count = {}
    n = len(arr)
    for i in range(n):      
        for key in xor_count:
            if is_palindrome(arr[i] ^ key):
                count += xor_count[key]
        xor_value = arr[i]
        if xor_value in xor_count:
            xor_count[xor_value] += 1
        else:
            xor_count[xor_value] = 1
    return count+len(arr)


print(count_palindrome_pairs([13,27 ,12, 26]))