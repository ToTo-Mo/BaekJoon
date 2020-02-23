result = ""
array = input().split()

before = array[0]
for elem in array:
    if(before >= elem):
        result = "ascending"
        break
    before = elem

before = array[0]
for elem in array:
    if(before <= elem):
        result = "descending"
        break
    before = elem

before = 


print(result)