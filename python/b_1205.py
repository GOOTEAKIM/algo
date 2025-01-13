import sys
sys.stdin = open('input.txt')

N, new, P = map(int,input().split())

if N > 0:
    arr = list(map(int,input().split()))

    arr.sort(reverse=True)

    if N == P and arr[-1] >= new:
        print(-1)
    else:
        arr.append(new)
        arr.sort(reverse=True)

        rank = 0
        count = 0
        last = -1

        for i in arr:

            if i != last :
                rank = count + 1
            count += 1
            last = i

            if i == new :
                if count <= P:
                    print(rank)
                else:
                    print(-1)

                break
else:
    print(1)

