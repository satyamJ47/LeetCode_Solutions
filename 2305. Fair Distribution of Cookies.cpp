class Solution {
public:
    int solve(int i,vector<int>& cookies,vector<int>&kids,vector<int>& dp)
    {
        
        if(i == cookies.size())
        {
            int maxi = 0;
            for(auto k:kids)maxi = max(maxi,k);
            return maxi;
        }
        int mini = INT_MAX;
        for(int j=0;j<kids.size();j++)
        {
            kids[j]+=cookies[i];
            mini = min (solve(i+1,cookies,kids,dp),mini);
            kids[j]-=cookies[i];
        }
        return dp[i] = mini;
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int>kids(k,0);
        vector<int>dp(cookies.size(),-1);
        return solve(0,cookies,kids,dp);
    }
};
