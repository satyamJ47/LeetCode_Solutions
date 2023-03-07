class Solution {
public:
    bool solve(int i,int target,vector<int>&nums,vector<vector<int>>&dp)
    {
        if(target == 0)return true;
        if(i==0)return target == nums[0];
        if(dp[i][target]!=-1)return dp[i][target];
        bool notTake = solve(i-1,target,nums,dp);
        bool take = false;
        if(target>=nums[i])take = solve(i-1,target - nums[i],nums,dp);

        return dp[i][target] = take | notTake;

    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto i:nums)sum+=i;
        int n = nums.size();
        // if(nums.size()==1)return false;
        vector<vector<bool>>dp(n,vector<bool>((sum/2) + 1));
        if(sum%2==0){
            for(int i=0;i<n;i++)dp[i][0] = true;
            if(nums[0]<=sum/2)dp[0][nums[0]] = true;

            for(int i=1;i<n;i++)
            {
                for(int target = 1;target<=sum/2;target++)
                {
                    bool notTake = dp[i-1][target]; 
                    bool take = false ;
                    if(target>=nums[i])take = dp[i-1][target-nums[i]];

                    dp[i][target] = take | notTake; 
                }
            }
            return dp[n-1][sum/2];
        }
        return false;
    }
};
