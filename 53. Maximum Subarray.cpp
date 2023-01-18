class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=nums[0];
        int cursum=0;
        for(auto i:nums)
        {
            // cursum+=i;
            maxsum=max(maxsum,cursum+=i);
            if(cursum<0)cursum=0;
        }
        return maxsum;
    }
};