import sys
sys.stdin = open('input.txt')

odds = list(map(int, input().split()))

arr_a = set(map(int,input().split()))
arr_b = set(map(int,input().split()))

res = arr_a - arr_b

if res:
    print(len(res))
    print(*sorted(res))

else:
    print(0)

