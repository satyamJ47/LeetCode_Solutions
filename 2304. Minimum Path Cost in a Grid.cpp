class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& grid, vector<vector<int>>& moveCost,int m,int n,vector<vector<int>>&dp)
    {
        if(i==m-1)return grid[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        
        int mini = INT_MAX;
        for(int col=0;col<n;col++)
        {
            mini = min(mini,grid[i][j] + moveCost[grid[i][j]][col] + solve(i+1,col,grid,moveCost,m,n,dp));
        }
        return dp[i][j] = mini;
    }
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        
        int m = grid.size();
        int n = grid[0].size();
        int mini = INT_MAX;
        vector<vector<int>>dp(m,vector<int>(n,-1));

        for(int j=0;j<n;j++)
            mini = min(mini,solve(0,j,grid,moveCost,m,n,dp));
        // return solve(0,0,grid,moveCost,m,n);

        return mini;
    }
};
