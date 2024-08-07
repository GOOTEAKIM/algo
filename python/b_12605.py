import sys
sys.stdin = open('input.txt')

n = int(input())

for x in range(1,n+1):
    words = list(input().split())
    print(f'Case #{x}:', *words[::-1])