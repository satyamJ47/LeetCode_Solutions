class Solution {
public:
    int mod = 1e9+7;
    int solve(int cur,vector<int>& loc,int finish,int fuel,vector<vector<int>>&dp)
    {
        
        // if(fuel<0){
        //     return 0;
        // }

        if(dp[cur][fuel]!=-1)return dp[cur][fuel];

        int res = cur == finish ? 1 : 0;
        for(int i=0;i<loc.size();i++)
        {
            int f = fuel-abs(loc[i]-loc[cur]);
            if(i!=cur && f>=0)
            res = (res + solve(i,loc,finish,f,dp))%mod;
             
        }
        return dp[cur][fuel] = res;
    }
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        vector<vector<int>>dp(locations.size(),vector<int>(fuel+1,-1));
        return solve(start,locations,finish,fuel,dp)%mod;
    }
};
