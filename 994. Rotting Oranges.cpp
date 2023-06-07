class Solution {
public:
    int bfs(vector<vector<int>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)q.push({{i,j},0});
            }
        }
        int time = 0;
        while(!q.empty())
        {
            int i = q.front().first.first;
            int j = q.front().first.second;
            time = q.front().second;
            q.pop();

            if(i>0 && grid[i-1][j]==1){
                grid[i-1][j]=2;
                q.push({{i-1,j},time+1});
            }
            if(j>0 && grid[i][j-1]==1){
                grid[i][j-1]=2;
                q.push({{i,j-1},time+1});
            }
            if(i<n-1 && grid[i+1][j]==1){
                grid[i+1][j]=2;
                q.push({{i+1,j},time+1});
            }
            if(j<m-1 && grid[i][j+1]==1){
                grid[i][j+1]=2;
                q.push({{i,j+1},time+1});
            }
        }
        return time;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int res = bfs(grid);
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)return -1;
            }
        }
        return res;
    }
};
