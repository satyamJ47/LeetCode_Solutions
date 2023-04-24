class Solution {
public:
    int solve(int i,int buy,int cap,vector<int>& prices,vector<vector<vector<int>>>&dp)
    {
        if(i==prices.size() || cap == 0)return 0;
        if(dp[i][buy][cap]!=-1)return dp[i][buy][cap];
        int profit = 0;
        if(buy)
        {
            profit = max(-prices[i]+solve(i+1,0,cap,prices,dp),solve(i+1,1,cap,prices,dp));
        }
        else profit = max(prices[i]+solve(i+1,1,cap-1,prices,dp),solve(i+1,0,cap,prices,dp));
        return dp[i][buy][cap] = profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        // base -> if(i==n || cap==0) dp[i][buy][cap] = 0;
        // tabulation
        // vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(2+1,0)));
        // Space optimization    
        vector<vector<int>>ahead(2,vector<int>(2+1,0));
        vector<vector<int>>cur(2,vector<int>(2+1,0));

        for(int i=n-1;i>=0;i--)
        {
            for(int buy = 0;buy<=1;buy++)
            {
                for(int cap = 2;cap>0;cap--)
                {
                    int profit = 0;
                    if(buy)profit = max(-prices[i]+ahead[0][cap],ahead[1][cap]);
                    else profit = max(prices[i]+ahead[1][cap-1],ahead[0][cap]);
                    cur[buy][cap] = profit;
                }
            }
            ahead = cur;
        }
        return cur[1][2];
    }
};
