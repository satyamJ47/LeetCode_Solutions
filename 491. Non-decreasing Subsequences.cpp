class Solution {
private:
    void solve(int i,vector<int>&temp,vector<int>&nums,set<vector<int>>&s)
    {
        if(i==nums.size())
        {
            if(temp.size()>1)s.insert(temp);
            return;
        }
        if(temp.empty() || temp.back()<=nums[i])
        {
            temp.push_back(nums[i]);
            solve(i+1,temp,nums,s);
            temp.pop_back();
        }
        solve(i+1,temp,nums,s);     
    }
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>s;
        vector<int>temp;
        solve(0,temp,nums,s);
        for(auto i:s)ans.push_back(i);
        return ans;
    }
};