N = int(input())
A = list(map(int, input().split()))
K = int(input())

cnt = 0
for i in A:
    if i >= K:
        cnt += 1

print(cnt)