class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& grid,int m,int n,int zero,int c)
    {
        // cout<<i<<" "<<j<<" "<<c<<" "<<endl;
        if(i<0 || j<0 || i>=m || j>=n)return 0;
        
        if(grid[i][j] == 2 && c==(m*n)-zero-1)return 1;
        if(grid[i][j]==2)return 0;
        if(grid[i][j] == -1)return 0;

        grid[i][j] = -1;
        // zero--;
        int up = solve(i-1,j,grid,m,n,zero,c+1);
        int down = solve(i+1,j,grid,m,n,zero,c+1);
        int left = solve(i,j-1,grid,m,n,zero,c+1);
        int right = solve(i,j+1,grid,m,n,zero,c+1);
        grid[i][j] = 0;
        // zero++;
        return up + down + left + right;

    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        
        int m=grid.size();
        int n=grid[0].size();
        int cnt = 0;
        // unordered_set<int>s;
        int zero = 0;
        int p,q;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j] == 1)
                {
                    p = i;
                    q = j;
                }
                if(grid[i][j] == -1)zero++;
            }
        }
        // cout<<p<<" "<<q<<" "<<zero<<" "<<m*n-1-zero<<endl<<endl;
        return solve(p,q,grid,m,n,zero,0);          
    }
};
