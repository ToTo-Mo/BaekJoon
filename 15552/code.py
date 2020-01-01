import sys
input()
for line in sys.stdin.readlines():
    print(sum(map(int,line.split())))