class Solution {
public:
    bool solve(int i,int j,string word,int k,vector<vector<char>>& mat,vector<vector<bool>>&v)
    {
        if(i<0 || j<0 || i>=mat.size() || j>=mat[0].size())return false;
        if(mat[i][j]!=word[k])return false;
        if(k==word.length()-1 && word[k]==mat[i][j])return true; 

        // up
        v[i+1][j+1] = true;
        if(!v[i+1-1][j+1]){if(solve(i-1,j,word,k+1,mat,v))return true;}
        if(!v[i+1+1][j+1]){if(solve(i+1,j,word,k+1,mat,v))return true;}
        if(!v[i+1][j-1+1]){if(solve(i,j-1,word,k+1,mat,v))return true;}
        if(!v[i+1][j+1+1]){if(solve(i,j+1,word,k+1,mat,v))return true;}
        v[i+1][j+1]=false;
        return false;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        vector<vector<bool>>v(board.size()+2,vector<bool>(board[0].size()+2));
        for(auto i:v[0])cout<<i<<endl;
        for(int i = 0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]==word[0]){
                    // v[i][j]=true;
                    if(solve(i,j,word,0,board,v)){cout<<i<<" "<<j<<endl;return true;}
                }
            }
        }
        return false;
    }
};
