class Solution {
public:
    int solve(int i,int j,string &s, string &t,vector<vector<int>>&dp)
    {
        if(j<0)return 1;
        if(i<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];

        int eq=0,noteq=0;
        if(s[i]==t[j])eq = solve(i-1,j-1,s,t,dp);
        noteq = solve(i-1,j,s,t,dp);
        return dp[i][j] = eq+noteq;

    }
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(n-1,m-1,s,t,dp);
    }
};
