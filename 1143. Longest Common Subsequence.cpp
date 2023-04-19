class Solution {
public:
// Memoization
    // int solve(int i,int j,string &s1,string &s2,vector<vector<int>>&dp)
    // {
    //     if(i<0 || j<0)return 0;
    //     if(dp[i][j]!=-1)return dp[i][j];

    //     if(s1[i] == s2[j]) return dp[i][j] =  1 + solve(i-1,j-1,s1,s2,dp);
    //     return  dp[i][j] = max(solve(i-1,j,s1,s2,dp),solve(i,j-1,s1,s2,dp));
    // }
    int longestCommonSubsequence(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        vector<int>prev(n2+1,0),cur(n2+1,0);
        // int res = solve(n1-1,n2-1,s1,s2,dp);
        // for(int i=0;i<=n1;i++)dp[i][0]=0;
        // for(int j=0;j<=n2;j++)dp[0][j]=0;
    // Tabulation
        for(int i=1;i<=n1;i++)
        {
            for(int j=1;j<=n2;j++)
            {
                if(s1[i-1]==s2[j-1]){ cur[j] = 1 + prev[j-1];}
                else cur[j] = max(prev[j],cur[j-1]);
            }
            prev = cur;
        }
        // dp array
        // for(auto i:dp)
        // {
        //     for(auto j:i)cout<<j<<" ";
        //     cout<<endl;
        // }
        return cur[n2];
    }
};
