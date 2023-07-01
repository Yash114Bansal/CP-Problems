for i in range(int(input())):
    x = int(input())
    if(x == 1):
        print("-1")
    elif(x==2):
        print("1 1 1")
    else:
        if(x&1):
            print(f"2 {x//2} 1")
        else:
            print(f"{(x-2)//2 } 2 2")