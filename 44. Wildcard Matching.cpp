class Solution {
public:
    bool solve(int i,int j,string &s,string &p,vector<vector<int>>&dp)
    {
        if(i<0 && j<0)return true;
        if(i<0)return false;
        if(j<0){
            for(int x = 0;x<=i;x++){
                if(s[x] != '*')return false;
            }
            return true;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        if(s[i] == p[j] || s[i]=='?')return dp[i][j] = solve(i-1,j-1,s,p,dp);
        if(s[i] == '*')
        {
            return dp[i][j] = (solve(i-1,j,s,p,dp) || solve(i,j-1,s,p,dp));
        }
        return dp[i][j] = false;

    }
    bool isMatch(string s, string p) {
        int m = p.size();
        int n = s.size();
        
        vector<vector<bool>>dp(m+1,vector<bool>(n+1));
        // cout<<dp[0][0]<<endl;
        dp[0][0] = true;
        for(int j=1;j<=n;j++)dp[0][j] = false;
        for(int i=1;i<=m;i++){if(p[i-1]=='*')dp[i][0] = true;else break;}
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(p[i-1] == s[j-1] || p[i-1]=='?')dp[i][j] = dp[i-1][j-1];
                else if(p[i-1]=='*') {
                    dp[i][j] = dp[i-1][j] || dp[i][j-1];
                }
            }
        }
        return dp[m][n];
    }
};
