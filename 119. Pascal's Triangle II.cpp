class Solution {
public:
    vector<int> getRow(int row) {
        vector<vector<int>>dp(row+1,vector<int>(row+1));
        for(int i=0;i<=row;i++)
        {
            dp[i][0] = 1;
            dp[i][i] = 1;
        }
        
        for(int i=2;i<=row;i++)
        {
            for(int j=1;j<i;j++)
            {
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }
        }
        // for(auto i:dp)
        // {
        //     for(auto j:i)cout<<j<<" ";cout<<endl;
        // }
        return dp[row];

    }
};
