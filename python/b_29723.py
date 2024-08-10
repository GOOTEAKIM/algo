import sys
sys.stdin = open('input.txt')

n,m,k = map(int,input().split())

scores = dict()

for _ in range(n):
    si, pi = input().split()

    if si not in scores:
        scores[si] = int(pi)

cut = 0
cnt = 0

for _ in range(k):
    ti = input()
    cut += scores[ti]
    scores.pop(ti)
    cnt += 1

scores_max = sorted(scores.items(), key=lambda x:x[1], reverse=True)
scores_min = sorted(scores.items(), key=lambda x:x[1])

max_cut = cut
max_cnt = cnt

min_cut = cut
min_cnt = cnt

for student in scores_max:
    if max_cnt >= m:
        break
    max_cut += student[1]
    max_cnt += 1

for student in scores_min:
    if min_cnt >= m:
        break
    min_cut += student[1]
    min_cnt += 1

print(min_cut, max_cut)
