class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int>dp(n,-1);
        dp[0]=1;
        
        int up = 0;
        for(int i=0;i<m;i++)
        {
            int left = 0;
            for(int j=0;j<n;j++)
            {
                // int left = 0, up = 0;
                if(i==0 && j==0)left=1;
                else {
                    if(j>0)left = left;
                    if(i>0)up = dp[j];
                    left = left + up;
                    dp[j]=left;
                }
                
            }
            for(auto i:dp)cout<<i<<" ";cout<<endl;
        }
        return dp[n-1];
    }
};
