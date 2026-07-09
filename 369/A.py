A, B = map(int, input().split())

# AとBが等しいとき同じ数しか等差数列になり得ない
# A+Bが偶数のとき、A/Bよりも下、A/Bの真ん中、A/Bよりも上で3つ
# A+Bが奇数のとき、A/Bよりも下、A/Bよりも上で2つ
if A == B:
    print(1)
elif (A + B) % 2 == 0:
    print(3)
else:
    print(2)