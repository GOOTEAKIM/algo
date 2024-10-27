import sys
sys.stdin = open('input.txt')

a,b = map(int,input().split())

if a > b:
    print("A")
elif a < b:
    print("B")
elif a == b:
    print("same")