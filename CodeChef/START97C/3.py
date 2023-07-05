def check(s,start,end):
    if(end - start == 1):
        return False
    for i in range(start,end):
        if(s[i]==")" or s[i] == ":"):
            continue
        else:
            return False
    return True

def solve():
    t = int(input())
    s = input()
    first = -1
    answer = 0
    for i in range(0,t):
        if(s[i] == ":" and first == -1):
            first = i
        elif(s[i] == ":"):
            if(check(s,first,i)):
                answer+=1
            first=i
    print(answer)

for T in range(int(input())):
    solve()