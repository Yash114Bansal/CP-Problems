a,b = map(int,input().split())
answer = 0
a={}
for i in range(b):
    p,q = map(int,input().split())
    t = 0
    if(a.get(p)):
        t = a[p]
    answer += q + t
    print(answer)
    if(a.get(p)):
        a[p] += q
    else:
        a[p] = q
    