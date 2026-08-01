N = int(input())
A = list(map(int, input().split()))

# N回ループの内包表記を使う
# 7の倍数スタートで1週間分合計して追加
ans = [sum(A[7 * i: 7 * i + 7]) for i in range(N)]
print(*ans)