class Solution {
public:
    int solve(int i,int transNo,vector<int>& prices,vector<vector<int>>&dp)
    {
        if(transNo == 0 || i==prices.size())return 0;
        if(dp[i][transNo]!=-1)return dp[i][transNo];
        int profit = 0;
        if(transNo%2 == 0)
            profit = max(-prices[i]+solve(i+1,transNo-1,prices,dp),solve(i+1,transNo,prices,dp));
        else 
            profit = max(prices[i]+solve(i+1,transNo-1,prices,dp),solve(i+1,transNo,prices,dp));
        return dp[i][transNo] = profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        // vector<vector<int>>dp(n+1,vector<int>((2*k)+1,0));
        // space optimization
        vector<int>ahead(2*k+1,0);
        vector<int>cur(2*k+1,0);
        for(int i=n-1;i>=0;i--)
        {
            for(int transNo=1;transNo<=2*k;transNo++)
            {
                int profit = 0;
                if(transNo%2==0)profit = max(-prices[i] + ahead[transNo-1],ahead[transNo]);
                else profit = max(prices[i] + ahead[transNo-1],ahead[transNo]);
                cur[transNo] = profit;
            }
            ahead = cur;
        }
        // cout<<dp[0][2*k]<<endl;
        // cout<<dp[0][2*k-1]<<endl;
        // cout<<dp[0][0]<<endl;
        return cur[2*k];
    }
};
