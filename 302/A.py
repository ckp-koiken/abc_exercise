A, B = map(int, input().split())

if A % B == 0:
    print(A // B)
else:
    print(A // B + 1)

# another answer
# 切り上げを表現してもよい
# print((A + B - 1) // B)