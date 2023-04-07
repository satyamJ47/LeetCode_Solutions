class Solution {
public:
    int solve(int i,int j,vector<vector<int>>&grid,int &cnt)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size())return false;

        if(grid[i][j]==0)return true;

        grid[i][j]=0;
        cnt++;
        bool up = solve(i-1,j,grid,cnt);
        bool down = solve(i+1,j,grid,cnt);
        bool left = solve(i,j-1,grid,cnt);
        bool right = solve(i,j+1,grid,cnt);

        return up && down && left && right;
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int res = 0;
        for(int i=1;i<grid.size()-1;i++)
            for(int j=1;j<grid[0].size()-1;j++){
                int cnt = 0;
                if(grid[i][j]==1){
                    if(solve(i,j,grid,cnt))res+=cnt;
                    // cout<<i<<" "<<j<<" "<<res<<endl;
                }
            }     
        return res;
    }
};
