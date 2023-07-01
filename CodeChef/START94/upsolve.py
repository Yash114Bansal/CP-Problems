# cook your dish here
truck=int(input())
mod=10**9+7
while truck>0:
    truck-=1
    no,ko=map(int,input().split())
    s=input()
    land=['a','e','i','o','u']
    p=1
    a=[]
    y=0
    x=0 
    for i in range(no):
        if(s[i] in land):
            if(x%ko==0 and x!=0):
                a.append(y)
            y=0 
            x+=1 
        elif(x%ko==0):
            y+=1 
    print(a)
    for i in a:
        p=(p*(i+1))%mod 
    print(p)