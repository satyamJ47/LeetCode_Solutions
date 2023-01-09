class Solution {
private:
    void subset2(int indx,vector<int>ds,vector<int>&nums,vector<vector<int>>&ans)
    {
        ans.push_back(ds);
        for(int i=indx;i<nums.size();i++)
        {
            if(i!=indx && nums[i]==nums[i-1])continue;
           
            ds.push_back(nums[i]);
            subset2(i+1,ds,nums,ans);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ds;
        vector<vector<int>>ans;
        subset2(0,ds,nums,ans);
        return ans;
    }
};