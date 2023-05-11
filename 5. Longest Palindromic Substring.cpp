class Solution {
public:
    int solve(int i,int j,string &s,string &t,vector<vector<int>>&dp)
    {
        if(i<0 || j<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];

        int matched = 0,mismatched = 0;
        if(s[i] == t[j])matched = 1 + solve(i-1,j-1,s,t,dp);
        mismatched = max(solve(i-1,j,s,t,dp),solve(i,j-1,s,t,dp));

        return dp[i][j] = max(matched,mismatched);
    }
    string longestPalindrome(string s) {
        string t = s;
        int n = s.size();
        reverse(t.begin(),t.end());

        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        int x = solve(n-1,n-1,s,t,dp);
        // cout<<x<<endl;
        int maxi = 0,zi,zj;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                int matched = 0,mismatched = 0;
                if(s[i-1] == t[j-1])dp[i][j] = 1 + dp[i-1][j-1];
                if(dp[i][j]>maxi && ((i-1) - ((n-1) - (j-1))) + 1 == dp[i][j]){
                    maxi = dp[i][j];
                    zi = i-1;
                    zj = j-1;
                }
            }
        }
        cout<<maxi<<" "<<zi<<" "<<zj<<endl;
        string res = "";
        cout<<((n-1) - zj)<<" ";
        int len = zi - ((n-1) - zj) + 1;
        cout<<len<<endl;
        while(len--)
        {
            res+=s[zi--];
        }
        return res;
    }
};
