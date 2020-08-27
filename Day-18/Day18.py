from collections import deque

class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        ans = []
        d = deque()
        for i in range(len(nums)):
            while len(d) > 0 and nums[i] >= nums[d[-1]]:
                d.pop()
            d.append(i)
            if d[0] == i-k:
                d.popleft()
            if i >= k-1:
                ans.append(nums[d[0]])
        return ans