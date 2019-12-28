import sys

for line in sys.stdin:
    if line == "0 0":
        break;
    print(sum(map(int,line.split())))