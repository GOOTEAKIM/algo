import sys
sys.stdin = open('input.txt')


def binarySearch(a):
    start = 0
    end = b-1
    result = 0
    while start <= end:
        mid = (start + end) // 2
        if lst_b[mid] < a:
            start = mid + 1
            result = mid
        else:
            end = mid - 1
    return result + 1

T = int(input())

for _ in range(T):
    a,b = map(int,input().split())
    lst_a = list(map(int,input().split()))
    lst_b = list(map(int,input().split()))

    lst_a.sort()
    lst_b.sort()

    answer = 0

    for i in lst_a:
        if i > lst_b[0]:
            t = binarySearch(i)
            answer += t

    print(answer)