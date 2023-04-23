class Solution {
public:
    // int solve(int i,int buy,vector<int>&prices,vector<vector<int>>&dp)
    // {
    //     if(i == prices.size())return 0;
    //     if(dp[i][buy]!=-1)return dp[i][buy];
    //     int profit = 0;
    //     if(buy)
    //     {
    //         profit = max(-prices[i]+solve(i+1,0,prices,dp),solve(i+1,1,prices,dp)); 
    //     }
    //     else{
    //         profit = max(prices[i] + solve(i+1,1,prices,dp),solve(i+1,0,prices,dp));
    //     }
    //     return dp[i][buy] = profit;
    // }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int>prev(n+1,0),cur(n+1);
        // int res = solve(0,1,prices,dp);

        for(int i=n-1;i>=0;i--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                int profit = 0;
                if(buy)
                {
                    profit = max(-prices[i] + prev[0],prev[1]);
                }
                else{
                    profit = max(prices[i] + prev[1],prev[0]);
                }
                cur[buy] = profit;
            }
            prev = cur;
        }
        
        // for(auto i:dp)
        // {
        //     for(auto j:i)cout<<j<<" ";cout<<endl;
        // }
        return cur[1];
    }
};
