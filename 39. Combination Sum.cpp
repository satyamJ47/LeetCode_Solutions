class Solution {
public:

    void sum(int i,int target,vector<int>& candidates,vector<int>& a,vector<vector<int>>& ans)
    {
        if(i==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(a);
            }
            return;
        }

        if(candidates[i]<=target){
            a.push_back(candidates[i]);
            sum(i,target-candidates[i],candidates,a,ans);
            a.pop_back();
        }
        sum(i+1,target,candidates,a,ans);  
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>a;
        sum(0,target,candidates,a,ans);
        return ans;
    }
};