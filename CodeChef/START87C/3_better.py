for i in range(int(input())):
    x = int(input())
    if (x == 1):
        print("-1")
    elif (x == 2):
        print("1 1 1")
    else:
        if (x < 1000000):
            if (x & 1):
                print(f"2 {x//2} 1")
            else:
                print(f"{(x-2)//2 } 2 2")
        # elif(x>999999999998)
        elif(x == 999999999998):
            c=999998
            a=1000000
            b=(x-c)//a
            print(f"{a} {b} {c}")
        elif(x == 999999999999):
            c=999999
            a=1000000
            b=(x-c)//a
            print(f"{a} {b} {c}")
        elif(x==1000000000000):
            c=1000000
            a=1000000
            b=(x-c)//a
            print(f"{a} {b} {c}")
        else:
            a = 1000000 - 1
            b = x//a
            c = x %a
            if (c == 0):
                a = 1000000 - 2
                b = x//a
                c = x%a
            print(f"{a} {b} {c}")
