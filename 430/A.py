A, B, C, D = map(int, input().split())

if C >= A:
    if D >= B:
        print("No")
    else:
        print("Yes")
else:
    print("No")

# another answer
# if C >= A and D < B:
#     print("Yes")
# else:
#     print("No")