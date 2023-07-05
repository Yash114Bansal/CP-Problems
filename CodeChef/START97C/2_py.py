def encrypt(text, s):
    result = ""
    for i in range(len(text)):
        if text[i].isupper():
            result += chr((ord(text[i]) - ord('A') + s) % 26 + ord('A'))
        else:
            result += chr((ord(text[i]) - ord('a') + s) % 26 + ord('a'))
    return result

def find_rotation(s1, s2):
    c1 = s1[0]
    c2 = s2[0]
    check = ord(c2) - ord(c1)
    if check < 0:
        check = 26 - abs(check)
    return check

def solve():
    length = int(input())
    s1 = input()
    s2 = input()
    s3 = input()
    rot = find_rotation(s1, s2)
    print(encrypt(s3, rot))
    
for T in range(int(input())):
    solve()
