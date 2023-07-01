for i in range(int(input())):
    a, b, x, y = map(int, input().split(" "))
    speed_a = 60 / x
    speed_b = 60 / y
    time_a = a*speed_a
    time_b = b*speed_b
    if time_a > time_b:
        print("Chefina")
    elif time_b > time_a:
        print("Chef")
    else:
        print("Both")