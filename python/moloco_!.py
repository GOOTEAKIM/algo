import sys
sys.stdin = open('input.txt')

# def solution(arr):

    # score = 0
    #
    # if len(arr) == 1:
    #     score += arr[0]
    #
    # elif len(arr) == 2:
    #     score += max(arr)
    #
    # else:
    #
    #     for i in range(len(arr)-1):
    #         if i == 0:
    #             if arr[i] > arr[i+1]:
    #                 score += arr[i]
    #             else:
    #                 pass
    #
    #         elif i == (len(arr) - 1):
    #             if arr[i] > arr[i-1]:
    #                 score += arr[i]
    #             else:
    #                 pass
    #
    #         else:
    #             if arr[i] > arr[i+1] and arr[i] > arr[i-1]:
    #                 score += arr[i]
    #             else:
    #                 pass

    # return score

arr = list(map(int,input().split()))
# print(solution(arr))

score = 0

if len(arr) == 1:
    score += arr[0]

elif len(arr) == 2:
    score += max(arr)

else:

    for i in range(len(arr)):
        if i == 0:
            if arr[i] > arr[i + 1]:
                score += arr[i]
            else:
                pass

        elif i == (len(arr) - 1):
            if arr[i] > arr[i - 1]:
                score += arr[i]
            else:
                pass

        else:
            if arr[i] > arr[i + 1] and arr[i] > arr[i - 1]:
                score += arr[i]
            else:
                pass

print(score)
