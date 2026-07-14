S, A, B, X = map(int, input().split())

len = 0

len += (X // (A + B)) * A

len += min(X % (A + B), A)

ans = len * S
print(ans)