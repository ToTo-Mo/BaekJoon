case = int(input())

for i in range(case):
    array = [int(score) for score in input().split()]
    del array[0]
    avg = sum(array)/len(array)
    higher = [score for score in array if score > avg]
    rate = len(higher)/len(array)
    print(f"{rate*100:.3f}%")