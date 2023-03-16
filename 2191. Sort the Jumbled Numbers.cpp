class Solution {
public:
    static bool comp(pair<int,int>p1, pair<int,int>p2)
    {
        return p1.first<p2.first;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>>v;
        vector<int>ans;
        for(auto i:nums)
        {
            string s = to_string(i);
            // cout<<s<<endl;
            int n = 0; 
            for(auto j:s)
            {
                int ind = j-'0';
                n = (n*10) + mapping[ind];
            }
            v.push_back(make_pair(n,i));
        }
        sort(v.begin(),v.end(),comp);
        for(auto i:v)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
