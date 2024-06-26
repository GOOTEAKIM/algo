import sys
sys.stdin = open('input.txt')

T = int(input())

for _ in range(T):
    case = int(input())

    count_zero = [0] * 41
    count_one = [0] * 41

    count_zero[0] = 1
    count_one[0] = 0

    count_zero[1] = 0
    count_one[1] = 1

    for i in range(2,41):
        count_zero[i] = count_zero[i-1] + count_zero[i-2]
        count_one[i] = count_one[i-1] + count_one[i-2]

    print(count_zero[case], count_one[case])