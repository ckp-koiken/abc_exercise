N = int(input())

N100 = N // 100

N10 = (N - N100 * 100) // 10

N1 = N - N100 * 100 - N10 * 10

if N100 == N10 and N10 == N1:
    print("Yes")
else:
    print("No")

# another answer
# 文字列で受け取れば添え字で参照できる
# N = input()
# if N[0] == N[1] and N[1] == N[2]:
#     print("Yes")
# else:
#     print("No")