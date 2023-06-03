class Solution {
public:
    void bfs(int i,int j,vector<vector<char>>&grid,queue<pair<int,int>>&q)
    {
        q.push({i,j});
        grid[i][j]='0';
        while(!q.empty())
        {
            i = q.front().first;
            j = q.front().second;
            cout<<i<<" "<<j<<" | ";
            q.pop();
            // if(i>=0 && i<grid.size() && j>=0 && j<grid.size()){

            
            if(j>0 && grid[i][j-1]=='1'){grid[i][j-1]='0';q.push({i,j-1});}
            if(j<grid[0].size()-1 && grid[i][j+1]=='1'){grid[i][j+1]='0';q.push({i,j+1});}
            if(i>0 && grid[i-1][j]=='1'){grid[i-1][j]='0';q.push({i-1,j});}
            if(i<grid.size()-1 && grid[i+1][j]=='1'){grid[i+1][j]='0';q.push({i+1,j});}
            // cout<<q.front().first<<" "<<q.front().second<<" | ";
            // }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        queue<pair<int,int>>q;
        int cnt = 0;
        // vector<int>visited(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    cout<<i<<" "<<j<<" -> ";
                    cnt++;
                    bfs(i,j,grid,q);
                    cout<<endl;
                }
            }
        }
        return cnt;
    }
};
