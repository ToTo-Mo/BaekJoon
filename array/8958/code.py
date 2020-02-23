size = int(input())

for i in range(size):
    score = 0
    point = 0
    for answer in input():
        if answer == "O":
            point = point + 1
            score = score + point
        else :
            point = 0
    print(score)