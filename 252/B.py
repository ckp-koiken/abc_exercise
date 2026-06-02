N, K = map(int, input().split())

A = [x for x in map(int, input().split())]
B = [x for x in map(int, input().split())]

highest = A[0]
for a in A:
    if a > highest:
        highest = a
        
ok = False

for b in B:
    if (A[b - 1] == highest):
        ok = True

if ok:
    print("Yes")
else:
    print("No")