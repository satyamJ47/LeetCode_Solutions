class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row = grid.size()-1; 
        int n = grid[0].size();
        int cnt = 0;
        int col = 0;
        while(col<n && row>=0)
        {
            if(grid[row][col]<0){cnt+=(n-col);row--;}
            else col++;
        } 
        return cnt;
    }
};
