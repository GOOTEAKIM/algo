import sys
sys.stdin = open('input.txt')

a = int(input())

lst = list(map(int,input().split()))
ans = []
while len(lst) >= 0:
    if lst:
        i = lst.pop(0)
        for j in range(len(lst)):
            if lst[j] > i:
                ans.append(lst[j])
                # print(lst[j])
                break

            else:
                if j == len(lst)-1:
                    ans.append(-1)
                    # print(-1)

    else:
        # print(-1)
        ans.append(-1)
        break

print(*ans)