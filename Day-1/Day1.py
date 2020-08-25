arrSize, targetSum = map(int, input().split())
arr = [int(x) for x in input().split()]
flag = 0
s = set()

for i in range(0, arrSize):
    temp = targetSum - arr[i]
    if temp in s:
        print("Possible")
        print(temp, arr[i])
        flag = 1
        break
    s.add(arr[i])

if not flag:
    print("Impossible")
