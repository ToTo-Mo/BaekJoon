import sys
array = [int(elem.replace("\n","")) for elem in sys.stdin]
print(max(array))
print(array.index(max(array))+1)