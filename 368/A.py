N, K = map(int, input().split())
A = list(map(int, input().split()))

under = A[-K:]
over = A[0 :(N - K)]

deck = under + over

# [print(i, end=" ") for i in deck]
# print()

# リストに*をつけてアンパック表示できる（中身だけを取り出せる）
print(*deck)