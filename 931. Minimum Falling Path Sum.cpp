class Solution {
public:
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int res = INT_MAX;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        for(int i=0;i<n;i++)
        {
            dp[0][i] = matrix[0][i];
        }

        for(int i=1;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int up = matrix[i][j] + dp[i-1][j];
                int left = INT_MAX;
                if(j>0)left = matrix[i][j] + dp[i-1][j-1];
                int right = INT_MAX;
                if(j<n-1)right = matrix[i][j] + dp[i-1][j+1];

                dp[i][j] = min(up,min(left,right));
            }
        }

        for(int i=0;i<n;i++)
        {
            res = min(res,dp[m-1][i]);
        }
        return res;
    }
};
