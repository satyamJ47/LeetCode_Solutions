class Solution {
public:
    void dfs(vector<vector<int>>& grid, int i, int j,int color,int old)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size())return ;
        if(grid[i][j]!=old)return;

        grid[i][j] = color;
        dfs(grid,i-1,j,color,old);
        dfs(grid,i+1,j,color,old);
        dfs(grid,i,j-1,color,old);
        dfs(grid,i,j+1,color,old);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color)return image;
        dfs(image,sr,sc,color,image[sr][sc]);
        return image;   
    }
};
