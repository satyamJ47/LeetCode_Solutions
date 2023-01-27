class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        // for(auto i:nums)cout<<i<<" ";
        // cout<<endl;
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n-3;i++)
        {
            if(i!=0 && nums[i]==nums[i-1])continue;
            for(int j=i+1;j<n-2;j++)
            {
                if((i+1) != j && nums[j]==nums[j-1])continue;
                int l=j+1,r=n-1;
                long long y = (long long)target - nums[i] - nums[j];
                
                while(l<r)
                {
                    long long x = nums[l]+nums[r];
                    // cout<<"y : "<<y<<" ";
                    // cout<<"x : "<<x<<endl;
                    if(y == x)
                    {
                        vector<int>t;
                        t.push_back(nums[i]);
                        t.push_back(nums[j]);
                        t.push_back(nums[l]);
                        t.push_back(nums[r]);
                        // cout<<nums[i]<<nums[j]<<nums[l]<<nums[r]<<endl;
                        ans.push_back(t);
                        l++;
                        r--;
                        // break;

                        // ans.push_back({nums[i],nums[j],nums[l++],nums[r--]});
                        
                        // break;
                        // l++;
                        // r--;
                        while(nums[l]==nums[l-1] && l<r)l++;
                        while(nums[r]==nums[r+1] && l<r)r--;
                    }
                    else if(y > x)
                    {
                        l++;
                        while(nums[l]==nums[l-1] && l<r)l++;
                    }
                    else
                    {
                        r--;
                        while(nums[r]==nums[r+1] && l<r)r--;
                    }
                }
            }
        }
        return ans;
    }
};
