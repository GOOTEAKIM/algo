import sys
sys.stdin = open('input.txt')

n, m = map(int,input().split())

def count_2(n):
    cnt = 0
    while n != 0:
        n = n // 2
        cnt += n
    return cnt

def count_5(n):
    cnt = 0
    while n != 0:
        n = n // 5
        cnt += n
    return cnt

result_2 = count_2(n) - count_2(m) - count_2(n-m)
result_5 = count_5(n) - count_5(m) - count_5(n-m)

print(min(result_2,result_5))
