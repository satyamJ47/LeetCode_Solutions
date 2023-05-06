class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int mod = 1e9+7;
        sort(nums.begin(),nums.end());

        vector<int>power(nums.size(),1);
        for (int i = 1; i < nums.size(); ++i) {
            power[i] = (power[i - 1] * 2) % mod;
        }

        int res = 0;
        int r = nums.size()-1;
        for(int l=0;l<nums.size();l++)
        {
            while(l<=r && nums[l]+nums[r]>target)r--;
            if(l<=r)
            res = (res + power[r-l]) % mod;  
        }
        return res;
    }
};
