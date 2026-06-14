N = int(input())
A = [x for x in map(int, input().split())]

cnt = [0] * (N + 1)

for a in A:
    cnt[a] += 1

for i in range(1, N + 1):
    if cnt[i] == 3:
        print(i)
        break 
