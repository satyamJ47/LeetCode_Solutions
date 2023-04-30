class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        
        
        unordered_map<int,int>ump;
        int asize = arr.size();
        for(int i=0;i<asize;i++)ump[arr[i]] = i;
        // for(auto i:ump)cout<<i.first<<" "<<i.second<<endl;
        
        int ans = INT_MAX;

        int m = mat.size();
        int n = mat[0].size();
        vector<int>c(n);
        for(int i=0;i<m;i++)
        {
            int  x = 0;
            for(int j=0;j<n;j++)
            {
                 x = max(x,ump[mat[i][j]]);
                c[j] = max(c[j],ump[mat[i][j]]);
                
            }
            // cout<<i<<" "<<x<<endl;
            ans = min(ans,x);
        }
        
        // cout<<endl;
        for(auto i:c){
            // cout<<i<<" ";
                      ans = min(i,ans);}
        // cout<<endl;
        
        // for(auto i:r)cout<<i<<" ";cout<<endl;
        // for(auto i:c)cout<<i<<" ";cout<<endl;

        return ans;
        
    }
};
