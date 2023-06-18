class Solution {
public:
int mod = 1e9+7;
    int dfs(int i,int j,vector<vector<int>>&grid,int prev,vector<vector<int>>& dp)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size())return 0;
        if(grid[i][j]<=prev)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int up = dfs(i-1,j,grid,grid[i][j],dp)%mod;
        int down = dfs(i+1,j,grid,grid[i][j],dp)%mod;
        int left = dfs(i,j-1,grid,grid[i][j],dp)%mod;
        int right = dfs(i,j+1,grid,grid[i][j],dp)%mod;

        return dp[i][j] = (1+up+down+left+right)%mod;

    }
    int countPaths(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();
        int res = 0;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int x = dfs(i,j,grid,-1,dp);
                // cout<<i<<" "<<j<<" "<<x<<endl;
                res = (res + x) % mod;
            }
        }
        return res;
    }
};
