import sys
sys.stdin = open('input.txt')

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


def max_gcd(numbers):
    max_gcd_value = 0
    n = len(numbers)

    for i in range(n):
        for j in range(i + 1, n):
            current_gcd = gcd(numbers[i], numbers[j])
            if current_gcd > max_gcd_value:
                max_gcd_value = current_gcd

    return max_gcd_value

numbers = []
while True:
    try:
        line = input().strip()
        if line:
            numbers.extend(map(int, line.split()))
        else:
            break
    except EOFError:
        break

result = max_gcd(numbers)
print(result)
