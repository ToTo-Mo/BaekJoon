value = int(input().split()[1])
result = [int(i) for i in input().split() if int(i) < value]
print(*result)