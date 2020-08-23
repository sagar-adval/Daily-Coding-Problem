class Solution {
public:
    int numDecodings(string s) {
        vector<int> dp(s.length()+1, 0);
        dp[0] = 1;
        if (s[0] == '0'){
            dp[1] = 0;
        }
        else{
            dp[1] = 1;
        }
        for(int i =2 ;i<s.length()+1;i++){
            int temp1, temp2;
            char x, y;
            x = s[i-1];
            y = s[i-2];
            temp1 = x - '0';
            temp2 = y - '0';
            temp2 = temp1 + temp2*10;
            cout<<temp1<<" "<<temp2<<endl;
             if(temp1>=1){
                dp[i] += dp[i-1];
             }
            if (temp2<=26 && temp2 >= 10){
                dp[i] += dp[i-2];
            }
        }
        return dp[s.length()];
    }   
};