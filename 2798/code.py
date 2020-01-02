N,M = list(map(int,input().split()))
cards = list(map(int,input().split()))

max = 0
## brute force
for i in range(N):
    for j in range(N):
        for k in range(N):
            if(i!=j and j!=k and i!=k):
                if(max < cards[i] + cards[j] + cards[k] <= M ):
                    max = cards[i] + cards[j] + cards[k]
print(max)