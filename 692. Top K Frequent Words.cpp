class Solution {
public:
    static bool comp(pair<int,string>p1,pair<int,string>p2)
    {
        if(p1.first==p2.first)return p1.second<p2.second;
        return p1.first>p2.first;
    } 
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string , int>freq;
        for(auto i:words)freq[i]++;
        vector<pair<int,string>>v;
        for(auto i:freq)v.push_back(make_pair(i.second,i.first));
        sort(v.begin(),v.end(),comp);
        vector<string>ans;
        for(int i=0;i<k;i++)ans.push_back(v[i].second);
        return ans;    
    }
};
