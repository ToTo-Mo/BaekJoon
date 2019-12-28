a = int(input());    b = input()[::-1]
for i in b:
    print(a * int(i))
print(a * int(b[::-1]))