class Solution {
public:
    int solve(vector<int>v,int n)
    {
        // vector<int>dp(n+1);
        // dp[0]=v[0];
        int prev1=v[0];
        int prev2;
        for(int i=1;i<n;i++)
        {
            int take=v[i];
            if(i>1)take+=prev2;
            int not_take=0+prev1;
            prev2=prev1;
            prev1=max(take,not_take);
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        vector<int>a1,a2;
        int n = nums.size();
        if(n==1)return nums[0];
        for(int i=0;i<n;i++)
        {
            if(i!=0)a1.push_back(nums[i]);
            if(i!=n-1)a2.push_back(nums[i]);
        }
        return max(solve(a1,n-1),solve(a2,n-1));
    }

};
