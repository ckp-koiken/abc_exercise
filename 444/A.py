N = int(input())

N100 = N // 100

N10 = (N - N100 * 100) // 10

N1 = N - N100 * 100 - N10 * 10

if N100 == N10 and N10 == N1:
    print("Yes")
else:
    print("No")