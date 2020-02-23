case = int(input())

for i in range(case):
    temp = input().split()
    result = ""
    for char in temp[1] :
        result = result + char * int(temp[0])
    print(result)