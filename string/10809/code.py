word = list(input())
result = [-1]*26

for i in range(len(word)):
    if result[ord(word[i])-97] == -1 :
        result[ord(word[i])-97] = i

for i in result:
    print(f'{i} ',end='')

"""
print(*map(input().find,map(chr,range(97,123))))
"""