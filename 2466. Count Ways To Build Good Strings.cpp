class Solution {
public:
    int mod = 1e9+7;
    int solve(int i,int low, int high, int zero, int one,vector<int>&dp)
    {
        if(i>high)return 0;
        if(dp[i]!=-1)return dp[i];
        int ans = 0;
        if(i>=low && i<=high)ans+=1;
        int o = solve(i+one, low, high, zero, one,dp)%mod;
        int z = solve(i+zero, low, high, zero, one,dp)%mod;

        return dp[i] = (ans+o+z)%mod;
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int>dp(high+1,-1);
        return solve(0,low, high, zero, one,dp);
    }
};
