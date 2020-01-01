import sys
input()
for i,line in enumerate(sys.stdin.readlines()):
    A,B=map(int,line.split())
    print(f"Case #{i+1}: {A} + {B} = {A+B}")