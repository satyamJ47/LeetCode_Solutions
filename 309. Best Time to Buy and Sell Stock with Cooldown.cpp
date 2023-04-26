class Solution {
public:
    int solve(int i,int buy,vector<int>& prices,vector<vector<int>>&dp)
    {
        if(i == prices.size())return 0;
        if(dp[i][buy]!=-1)return dp[i][buy];

        // buy
        int profit = 0;
        if(buy==0)
        {
            profit = max(-prices[i]+solve(i+1,1,prices,dp),solve(i+1,0,prices,dp));
        }
        // sell
        else if(buy == 1){
            profit = max(prices[i]+solve(i+1,2,prices,dp),solve(i+1,1,prices,dp));
        }
        // cooldown
        else{
            profit = solve(i+1,0,prices,dp);
        }
        return dp[i][buy] = profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>>dp(n,vector<int>(3,-1));
        return solve(0,0,prices,dp);
    }
};
