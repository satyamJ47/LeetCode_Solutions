class Solution {
private:
    void sum2(int indx,int target,vector<int>&cand,vector<int>&ds,vector<vector<int>>&ans){
        
        if(target==0)
        {
            ans.emplace_back(ds);
            return;
        }

        for(int i=indx;i<cand.size();i++)
        {
            if(i>indx && cand[i]==cand[i-1])
                continue;
            if(target<cand[i])break;
            ds.emplace_back(cand[i]);
            sum2(i+1,target-cand[i],cand,ds,ans);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        sort(cand.begin(),cand.end());
        vector<int>ds;
        vector<vector<int>>ans;
        sum2(0,target,cand,ds,ans);
        return ans;
    }
};