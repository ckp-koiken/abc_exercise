P = [x for x in map(int, input().split())]

letter = "abcdefghijklmnopqrstuvwxyz"

for p in P:
    print(letter[p - 1], end="")
print()