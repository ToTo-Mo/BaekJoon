import random as rand

file = open("15552/input",'w')

for i in range(rand.randint(0,90000)+10001):
    file.write(f"{rand.randint(0,10000)} {rand.randint(0,10000)}\n")

file.close()