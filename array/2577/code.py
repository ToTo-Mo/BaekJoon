A = int(input())
B = int(input())
C = int(input())

digits = {}
for digit in list(str(A*B*C)):
    digits[digit] = digits.get(digit,0)+1

## print(A*B*C)
for i in range(10):
    print(digits.get(str(i),0))