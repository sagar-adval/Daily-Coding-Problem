def find_max_sum(arr):
    take = arr[0]
    leave = 0
     for i in arr: 
        temp = max(take, leave)
        take = leave + i 
        leave = temp 
    return max(take, leave)
      