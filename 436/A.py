N = int(input())
S = input()

T = ""
length = len(S)

for i in range(N - length):
    T += 'o'

print(T + S)