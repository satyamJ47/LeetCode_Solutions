class Solution {
public:
    bool solve(int i,int j,int cnt,vector<vector<int>>&grid,int mxr,int mxc)
    {
        if(i<0 || j<0 || i>=mxr || j>=mxc)return false;
        if(grid[i][j]==-1)return false;
        if(cnt != grid[i][j])return false;

        if(cnt == (mxr*mxc) - 1)return true;
        
        grid[i][j] = -1;
        if(solve(i+2,j+1,cnt+1,grid,mxr,mxc))return true;
        if(solve(i+2,j-1,cnt+1,grid,mxr,mxc))return true;
        if(solve(i-2,j+1,cnt+1,grid,mxr,mxc))return true;
        if(solve(i-2,j-1,cnt+1,grid,mxr,mxc))return true;
        if(solve(i+1,j+2,cnt+1,grid,mxr,mxc))return true;
        if(solve(i-1,j+2,cnt+1,grid,mxr,mxc))return true;
        if(solve(i+1,j-2,cnt+1,grid,mxr,mxc))return true;
        if(solve(i-1,j-2,cnt+1,grid,mxr,mxc))return true;

        return false;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        int mxr =grid.size();
        int mxc =grid[0].size();
        return solve(0,0,0,grid,mxr,mxc);
    }
};
