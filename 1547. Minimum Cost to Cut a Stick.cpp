class Solution {
public:
// cut_start -> begining index of cuts;
// cut_end -> ending index of cuts;

    int dp[101][101];
    int solve(int start,int end,vector<int>&cut,int cut_start,int cut_end)
    {
        if(cut_start > cut_end)return 0;
        if(dp[cut_start][cut_end]!=-1)return dp[cut_start][cut_end];
        
        int mini = INT_MAX;
        for(int i=cut_start;i<=cut_end;i++)
        {
            int left = solve(start,cut[i],cut,cut_start,i-1);
            int right = solve(cut[i],end,cut,i+1,cut_end);
            mini = min(mini,(end-start)+left+right);
        }
        return dp[cut_start][cut_end] = mini;
    }
    int minCost(int n, vector<int>& cuts) {
        // vector<vector<int>>dp(n,vector<int>(n,-1));
        memset(dp,-1,sizeof(dp));
        sort(cuts.begin(),cuts.end());
        return solve(0,n,cuts,0,cuts.size()-1);
    }
};
