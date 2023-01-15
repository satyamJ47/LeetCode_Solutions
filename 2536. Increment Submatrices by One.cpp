class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>ans(n,vector<int>(n,0)),temp(n+1,vector<int>(n+1,0));
        for(auto q:queries)
        {
            int srow=q[0];
            int scol=q[1];
            int erow=q[2];
            int ecol=q[3];

            temp[srow][scol]++;
            temp[srow][ecol+1]--;
            temp[erow+1][scol]--;
            temp[erow+1][ecol+1]++;
        }
        // for(auto i:temp)
        // {
        //     for(auto j:i)cout<<j<<" ";
        //     cout<<endl;
        // }

        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                temp[i][j]+=temp[i][j-1];
            }
        }
        // cout<<"\ncol prefix sum: \n";
        // for(auto i:temp)
        // {
        //     for(auto j:i)cout<<j<<" ";
        //     cout<<endl;
        // }

        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                temp[i][j]+=temp[i-1][j];
            }
        }
        // cout<<"\nRow prefix sum: \n";
        // for(auto i:temp)
        // {
        //     for(auto j:i)cout<<j<<" ";
        //     cout<<endl;
        // }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans[i][j]=temp[i][j];
            }
        }
        return ans;
    }
};