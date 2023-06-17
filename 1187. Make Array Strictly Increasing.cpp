class Solution {
public:
    
    int solve(int i,int prev,vector<int>& nums, vector<int>& a,map<pair<int,int>,int>&dp)
    {
        if(i >= nums.size())return 0;
        if(dp.find({i,prev})!=dp.end())return dp[{i,prev}];

        int replace = 1e9;
        int skip = 1e9;

        int x = upper_bound(a.begin(),a.end(),prev) - a.begin();
        // cout<<prev<<" "<<x<<endl;
        if(nums[i]>prev)skip = solve(i+1,nums[i],nums,a,dp);
        if(x<a.size()){
            replace = 1 + solve(i+1,a[x],nums,a,dp); 
        }
        
        return dp[{i,prev}] = min(skip,replace);
    }
    int makeArrayIncreasing(vector<int>& nums, vector<int>& a) {
        sort(a.begin(),a.end());
        map<pair<int,int>,int> dp;
        int res = solve(0,-1,nums,a,dp);
        return res == 1e9 ? -1 : res ;
    }
};
