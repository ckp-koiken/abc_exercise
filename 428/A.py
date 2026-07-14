S, A, B, X = map(int, input().split())

# 進んだ回数
len = 0

# A+Bの反復回数にAをかけたものが進んだ回数
len += (X // (A + B)) * A

# A+Bをもう一回できない程度にしか時間が残されていない場合
# XをA+Bで割った余りを求めて
# Aと比較して小さい方が進んだ回数
len += min(X % (A + B), A)

ans = len * S
print(ans)