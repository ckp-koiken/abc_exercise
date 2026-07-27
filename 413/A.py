N, M = map(int, input().split())
A = list(map(int, input().split()))

total = sum(A)

if M >= total:
    print("Yes")
else:
    print("No")