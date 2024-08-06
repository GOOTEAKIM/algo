import sys
sys.stdin = open('input.txt')

n,m = map(int,sys.stdin.readline().rstrip().split())

diction = dict()

for _ in range(n):
    word = sys.stdin.readline().rstrip()
    if len(word) >= m:
        if word not in diction:
            diction[word] = 1
        else:
            diction[word] += 1
    else:
        pass

real = sorted(diction.items(), key=lambda x :(-x[1], -len(x[0]), x[0]))

for i in real:
    print(i[0])



