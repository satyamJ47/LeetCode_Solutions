class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n==1)return false;
        if(nums[0]!=1)return false;
        // for(auto i:nums)cout<<i<<" ";
        for(int i=1;i<n-1;i++)
        {
            if(nums[i]!=nums[i-1]+1)return false;
        }
        if(nums[n-1] != nums[n-2])return false;
        return true;
    }
};
