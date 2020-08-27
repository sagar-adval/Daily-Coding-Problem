class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> d;
        for(int i=0;i<nums.size();i++){
            while(d.size() && nums[d.back()] < nums[i]){
                d.pop_back();   
            }
            d.push_back(i);
            if(d.front() == i-k) d.pop_front();
            if(i >= k-1){
                ans.push_back(nums[d.front()]);
            }
        }
        return ans;
    }
};