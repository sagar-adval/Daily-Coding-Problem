class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(!nums.size()) return 1;
        int n = nums.size();
        int onef = 0;
        for(int i= 0;i<n;i++){
            if (nums[i] == 1) onef = 1;
            else if(nums[i]<=0 || nums[i] > n) {
                nums[i] = 1;
            }
        }
        if(!onef) return 1;
        for(int i= 0;i<n;i++){
            int ind = abs(nums[i])-1;
            if(nums[ind] > 0) nums[ind] *= -1;
        }
        for(int i = 0;i<n;i++){
            if(nums[i]>0) return i+1;
        }
        return n+1;
    }
};