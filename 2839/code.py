candy = int(input())
bag = 0

while(candy != 0):
	if(candy % 5 == 0 ):
		candy = candy - 5
		bag = bag + 1
	elif(candy % 3 == 0):
		candy = candy - 3
		bag = bag + 1
	elif candy > 5 :
		candy = candy - 5
		bag = bag + 1
	else:
		bag = -1
		break
print(bag)
