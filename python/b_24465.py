import sys
sys.stdin = open('input.txt')

book = list()

for _ in range(7):
    arr = list(map(int,input().split()))
    month = arr[0]
    day = arr[1]

    score = month*100 + day
    # print(score)
    if 120 <= score <= 218:
        score = (month, day, "bottle")
    elif 219 <= score <= 320:
        score = (month, day, "fish")
    elif 321 <= score <= 419:
        score = (month, day, "sheep")
    elif 420 <= score <= 520:
        score = (month, day, "cow")
    elif 521 <= score <= 621:
        score = (month, day, "twin")
    elif 622 <= score <= 722:
        score = (month, day, "crab")
    elif 723 <= score <= 822:
        score = (month, day, "lion")
    elif 823 <= score <= 922:
        score = (month, day, "woman")
    elif 923 <= score <= 1022:
        score = (month, day, "ching")
    elif 1023 <= score <= 1122:
        score = (month, day, "jeon")
    elif 1123 <= score <= 1221:
        score = (month, day, "shooter")
    else:
        score = (month, day, "goat")
    # print(score)
    book.append(score[2])
# print(book)

n = int(input())

ans = list()
for _ in range(n):
    apparr = list(map(int,input().split()))
    appmonth = apparr[0]
    appday = apparr[1]

    score = appmonth*100 + appday
    if 120 <= score <= 218:
        score = (appmonth, appday, "bottle")
    elif 219 <= score <= 320:
        score = (appmonth, appday, "fish")
    elif 321 <= score <= 419:
        score = (appmonth, appday, "sheep")
    elif 420 <= score <= 520:
        score = (appmonth, appday, "cow")
    elif 521 <= score <= 621:
        score = (appmonth, appday, "twin")
    elif 622 <= score <= 722:
        score = (appmonth, appday, "crab")
    elif 723 <= score <= 822:
        score = (appmonth, appday, "lion")
    elif 823 <= score <= 922:
        score = (appmonth, appday, "woman")
    elif 923 <= score <= 1022:
        score = (appmonth, appday, "ching")
    elif 1023 <= score <= 1122:
        score = (appmonth, appday, "jeon")
    elif 1123 <= score <= 1221:
        score = (appmonth, appday, "shooter")
    else:
        score = (appmonth, appday, "goat")

    # print(score)

    if score[2] not in book:
        ans.append((score[0], score[1]))
    else:
        pass
ans.sort()


if not ans:
    print("ALL FAILED")
else:
    for i in ans:
        print(*i)

