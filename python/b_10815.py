import sys
sys.stdin = open('input.txt')

N = int(sys.stdin.readline())
arrN = set(map(int,sys.stdin.readline().split()))

M = int(input())
arrM = list(map(int,sys.stdin.readline().split()))

for i in arrM:
    if i in arrN:
        print(1, end= " ")
    else:
        print(0, end= " ")