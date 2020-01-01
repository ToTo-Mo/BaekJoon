num1 = input()

cycle = 1
num2 = ("" if num1[-1] == "0" else num1[-1]) + str(sum(map(int,num1))%10)
while(num2 != num1):
    num2 = ("" if num2[-1] == "0" else num2[-1]) + str(sum(map(int,num2))%10)
    cycle = cycle +1
print(cycle)