class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int fast = 0,slow = 0;
        int zero = 0;
        int ans = 0;
        while(fast<nums.size())
        {
            if(!nums[fast]){
                zero++;
                while(zero == 2){
                    if(nums[slow] == 0)zero--;
                    slow++;
                } 
            } 
            fast++;
            ans = max(ans,fast-slow-1);
        }
        return ans;
    }
};
