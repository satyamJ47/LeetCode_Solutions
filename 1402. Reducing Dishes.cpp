class Solution {
public:
    int solve(int i,vector<int>& s,int k,vector<vector<int>>&dp)
    {
        if(i==s.size())return 0;
        if(dp[i][k]!=-1)return dp[i][k];

        int take = (k)*s[i] + solve(i+1,s,k+1,dp);
        int nottake = solve(i+1,s,k,dp);

        return dp[i][k] = max(take,nottake);p
    }
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(),s.end());
        vector<vector<int>>dp(s.size(),vector<int>(s.size()+1,-1));
        return solve(0,s,1,dp);
    }
};
