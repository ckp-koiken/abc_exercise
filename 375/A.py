N = int(input())
S = input()

size = len(S)
cnt = 0

for i in range(size - 2):
    if S[i] == '#' and S[i + 2] == '#' and S[i + 1] == '.':
        cnt += 1

print(cnt)