import sys
sys.stdin = open('input.txt')

values = 0
scores = 0

for _ in range(20):
    name, value, score = input().split()

    if score == "A+":
        values += float(value)
        scores += (float(value) * 4.5)

    elif score == "A0":
        values += float(value)
        scores += (float(value) * 4.0)

    elif score == "B+":
        values += float(value)
        scores += (float(value) * 3.5)

    elif score == "B0":
        values += float(value)
        scores += (float(value) * 3.0)

    elif score == "C+":
        values += float(value)
        scores += (float(value) * 2.5)

    elif score == "C0":
        values += float(value)
        scores += (float(value) * 2.0)

    elif score == "D+":
        values += float(value)
        scores += (float(value) * 1.5)

    elif score == "D0":
        values += float(value)
        scores += (float(value) * 1.0)

    elif score == "F":
        values += float(value)
        scores += (float(value) * 0)

    else:
        pass

print(round(scores/values, 6))
