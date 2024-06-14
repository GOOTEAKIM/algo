import sys
sys.stdin = open('input.txt')

chart = {}
arr = []

for i in range(1, 9):
    num = int(input())
    chart[num] = i
    arr.append(num)

arr.sort()

print(sum(arr) - (arr[0] + arr[1] + arr[2]))

arr2 = []

arr2.append(chart.get(arr[3]))
arr2.append(chart.get(arr[4]))
arr2.append(chart.get(arr[5]))
arr2.append(chart.get(arr[6]))
arr2.append(chart.get(arr[7]))
arr2.sort()

print(*arr2)