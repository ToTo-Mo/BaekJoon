A,B,V = map(int,input().split())

current = 0
day = 1

while(current<=V):
    current = current + A
    if(current>=V):
        break;
    current = current - B
    day = day + 1

print(day)