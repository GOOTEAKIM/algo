import sys
sys.stdin = open('input.txt')

result = int(input())

cnt = 0

for a in range(0, result + 1):
    for b in range(0, result + 1):
        for c in range(0, result + 1):
            if a+b+c == result :
                if c >= b + 2 and a % 2 == 0 and a>0 and b>0 and c>0:

                    cnt += 1

print(cnt)



