class Solution:
    def numDecodings(self, s: str) -> int:
        # dp = [None]*(len(s)+1)
        # return numWay(s, len(s), dp)
        dp = [0]*(len(s)+1)
        dp[0] = 1
        if s[0] == '0':
            dp[1] = 0
        else:
            dp[1] = 1 
        for i in range(2, len(s)+1):
            temp1 = int(s[i-1])
            temp2 = int(s[i-2:i])
            if(temp1>=1):
                dp[i] += dp[i-1]
            if 10<=temp2<=26:
                dp[i] += dp[i-2]
        return dp[len(s)]
        