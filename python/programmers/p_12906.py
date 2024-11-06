import sys
sys.stdin = open("input.txt")

def solution(arr):

    lst = []

    for i in arr:
        if not lst:
            lst.append(i)
        else:
            if i != lst[-1]:
                lst.append(i)
            else:
                pass

    return lst

arr = list(map(int,input().split(',')))

print(solution(arr))



