import sys
sys.stdin = open('input.txt')

t = input()

cnt = 0
for i in range(1,int(t)+1):
    if i < 100:
        cnt += 1

    else:

        if (int(str(i)[1]) - int(str(i)[0])) == (int(str(i)[2]) - int(str(i)[1])):
            cnt += 1
        else:
            pass

print(cnt)


