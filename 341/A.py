N = int(input())
S = ""
for i in range(2 * N + 1):
    if i % 2 == 1:
        S += "0"
    else:
        S += "1"

print(S)

# another answer
# 1を1回、01をN回追加してもよい
# T = "1"
# for i in range(N):
#     T += "01"
# print(T)