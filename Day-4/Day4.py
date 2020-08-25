class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        n = len(nums)
        if n ==0:
            return 1
        onef = False
        for i in range(n):
            if nums[i]==1: 
                onef = True
            elif nums[i]<=0 or nums[i] > n:
                nums[i] = 1
                
        if not onef:
            return 1
        for i in range(n):
            ind = abs(nums[i])-1
            if nums[ind]>0: 
               nums[ind] *= -1
            
        for i in range(n):
            if nums[i]>0:
               return i+1
        
        return n+1