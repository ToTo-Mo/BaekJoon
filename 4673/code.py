size = 10001
isUnSelf = [False]*size

def solution(value):
	return value+sum([int(i) for i in str(value)])

for i in range(1,size):
	index = solution(i)
	if index <= size-1:
		isUnSelf[index] = True 

for i in range(1,size):
	if isUnSelf[i] == False:
		print(i)
