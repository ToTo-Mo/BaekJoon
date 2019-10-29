count = int(input())

for i in range(count):
    processor_size = int(input())
    processor = []
    for line in range(processor_size):
        processor.append([int(cell) for cell in input().split(" ")])
    
