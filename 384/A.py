N, c1, c2 = input().split()
S = input()

T = ""

for i in S:
    if i != c1:
        T += c2
    else:
        T += i

print(T)