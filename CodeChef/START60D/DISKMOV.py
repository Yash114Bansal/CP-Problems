for zz in range(int(input())):
    N,K=map(int,input().split())
    array = list(map(int,input().split()))
    top = 2*N
    ans = 0
    mm = []
    for i in range(1,top+1):
        if i in array:
            continue
        if len(mm)<K:
            mm.append(i)
    for i in range(1,len(mm)+1):
        p = 0-i
        array.append(mm[p])
        ans+=max(array)-mm[p]
    print(ans)