size = input()
array = [int(elem) for elem in input().split()]
max_ = max(array)
array = [elem/max_*100 for elem in array]
print(sum(array)/len(array))