class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();

        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i-1]==nums[i])continue;
            int x=0-nums[i];
            int l=i+1,r=n-1;
            while(l<r)
            {
                if(nums[l]+nums[r]==x)
                {
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(l<r && nums[l]==nums[l-1])l++;
                    while(l<r && nums[r]==nums[r+1])r--;
                }
                else if(nums[l]+nums[r]<x)
                {
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return ans;
    }
};
