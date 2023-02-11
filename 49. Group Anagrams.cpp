class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , int>ump;
        int indx=0;
        vector<vector<string>>v;
        for(int i=0;i<strs.size();i++)
        {
            string s=strs[i];
            sort(s.begin(),s.end());
            if(ump.find(s)!=ump.end())
            {
                v[ump[s]].push_back(strs[i]);
            }
            else{
                ump[s]=indx++;
                v.push_back({strs[i]});
            }
        }
        return v;
    }
};
