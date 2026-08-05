N, T, A = map(int, input().split())

check = N // 2 + 1
if T >= check or A >= check:
    print("Yes")
else:
    print("No")