import sys
sys.stdin = open('input.txt')

n = input()

digit_count = [0] * 10

for char in n:
    digit_count[int(char)] += 1

six_nine_count = (digit_count[6] + digit_count[9] + 1) // 2
digit_count[6] = digit_count[9] = 0

max_count = max(digit_count)

result = max(max_count, six_nine_count)

print(result)
