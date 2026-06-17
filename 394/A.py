S = input()

T = ""

for i in S:
    if i == "2":
        T += i

print(T)

# another answer
# 入力文字列の2の個数を数えて個数分だけ2を連結する
# .count()で数える
# print("2" * input().count("2"))