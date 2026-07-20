X, Y = input().split()

if (X == "Serval" or X == "Lynx" or X == "Ocelot") and Y == "Ocelot":
    print("Yes")
    exit()

if (X == "Lynx" or X == "Serval") and Y == "Serval":
    print("Yes")
    exit()

if X == "Lynx" and Y == "Lynx":
    print("Yes")
    exit()

print("No")