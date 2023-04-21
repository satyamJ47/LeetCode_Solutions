class Solution {
public:
    int solve(int i,int j,string& s,string& t,vector<vector<int>>&dp)
    {
        if(i<0)return j+1;
        if(j<0)return i+1;
        if(dp[i][j]!=-1)return dp[i][j];
        int matched = INT_MAX,notmatched = INT_MAX;
        if(s[i] == t[j])matched = solve(i-1,j-1,s,t,dp);
        else{
            notmatched = 1 + min(solve(i,j-1,s,t,dp),min(solve(i-1,j,s,t,dp),solve(i-1,j-1,s,t,dp)));
        }
        return dp[i][j] = min(matched,notmatched);
    }
    int minDistance(string s, string t) {
        int m = s.size();
        int n = t.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1));
        for(int i=0;i<=m;i++)dp[i][0] = i;
        for(int j=0;j<=n;j++)dp[0][j] = j;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s[i-1] == t[j-1])dp[i][j] = dp[i-1][j-1];
                else dp[i][j] = 1 + min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
            }
        }
        return dp[m][n];
    }
};
