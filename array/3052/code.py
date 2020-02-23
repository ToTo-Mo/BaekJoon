import sys
others = {}
for elem in sys.stdin:
    others[int(elem) % 42] = others.get(int(elem) % 42,0) + 1
print(len(others))