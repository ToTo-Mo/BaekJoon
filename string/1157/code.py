string = {}
for elem in input().lower() :
    string[elem] = string.get(elem,0) + 1

result = [char for char,count in string.items() if count == max(string.values())]
print("?" if len(result)>=2 else result[0].upper())