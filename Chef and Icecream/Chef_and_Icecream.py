t = int(input())  # no of test cases

for m in range(t):
    n = int(input())
    arr = list(map(int, input().split()))  # So as to take input in the same line

    f1 = 0  # To store no fo Rs. 5 coins
    t1 = 0  # To store no fo Rs. 10 coins
    flag = 0
    for x in range(n):
        if arr[x] == 10:
            f1 -= 1
            t1 += 1
            if f1 < 0:
                print('NO')
                flag = 1
                break
        elif arr[x] == 15:
            if t1 > 0:
                t1 -= 1
            else:
                f1 -= 2
                if f1 < 0:
                    print('NO')
                    flag = 1
                    break
        else:
            f1 += 1

    if flag == 0:
        print("YES")