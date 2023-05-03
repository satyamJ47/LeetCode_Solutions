class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,1);
        vector<int>hash(n);
        for(int i=0;i<n;i++)hash[i] = i;
        int maxi = 1;
        int last_index = 0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++)
        {
            for(int prev=0;prev<i;prev++)
            {
                if(nums[i]%nums[prev] == 0 && dp[prev]+1>dp[i])
                {
                    dp[i] = dp[prev]+1;
                    hash[i]=prev;
                }
            }
            // maxi = max(maxi,dp[i]);
            if(dp[i]>maxi){
                maxi = dp[i];
                last_index = i;
            }

        }
        cout<<maxi<<" "<<" "<<last_index<<endl;
        vector<int>res;
        while(last_index != hash[last_index])
        {
            res.push_back(nums[last_index]);
            last_index = hash[last_index];
        }
        res.push_back(nums[last_index]);
        reverse(res.begin(),res.end());

        return res;
    }
};
