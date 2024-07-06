import sys
sys.stdin = open('input.txt')

n,x = map(int,input().split())

arr = list(map(int,input().split()))

current_sum = sum(arr[:x])

max_sum = current_sum
count = 1

for i in range(1,n-x+1) :
    current_sum = current_sum - arr[i-1] + arr[i+x-1]

    if current_sum > max_sum:
        max_sum = current_sum
        count = 1
    elif current_sum == max_sum:
        count += 1

if max_sum == 0:
    print("SAD")
else:
    print(max_sum)
    print(count)


