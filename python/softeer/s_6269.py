import sys
sys.stdin = open('input.txt')

m,n,k = map(int,input().split())

command = input()
buttons = input()

if command in buttons:
    print("secret")
else:
    print("normal")

