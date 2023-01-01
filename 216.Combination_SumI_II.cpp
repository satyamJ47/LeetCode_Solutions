class Solution {
public:
    void sum3(int i,int k,int n,vector<int>a,vector<vector<int>>&v)
    {
        if(i==10 || a.size()==k)
        {
            int s=0;
            for(auto i:a)s+=i;
            if(s==n && a.size()==k)v.push_back(a);
            return;
        }
        a.push_back(i);
        sum3(i+1,k,n,a,v);
        a.pop_back();
        sum3(i+1,k,n,a,v);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>v;
        vector<int>a;
        sum3(1,k,n,a,v);
        return v;
    }
};