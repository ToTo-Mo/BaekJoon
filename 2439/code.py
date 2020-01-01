size = int(input())

for i in range(size):
    print(" "*(size-i-1),end='')
    print("*"*(i+1))