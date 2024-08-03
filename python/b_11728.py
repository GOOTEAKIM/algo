import sys
sys.stdin = open('input.txt')

n, m = map(int,input().split())

arr = list(map(int,input().split()))
brr = list(map(int,input().split()))


final = arr + brr
final.sort()
print(*final)
