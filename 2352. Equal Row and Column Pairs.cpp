class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>mp;
        for(auto i:grid)
        {
            mp[i]++;
        }
        // for(auto i:mp)
        // {
        //     for(auto e:i)cout<<e<<" ";cout<<endl;
        // }
        int cnt = 0;
        for(int j=0;j<grid[0].size();j++)
        {
            vector<int>t;
            for(int i=0;i<grid.size();i++)
            {
                t.push_back(grid[i][j]);
            }
            
            if(mp.find(t)!=mp.end())cnt+=mp[t];
            // for(auto e:t)cout<<e<<" ";cout<<"-> "<<cnt<<endl;
        }
        return cnt;
    }
};
