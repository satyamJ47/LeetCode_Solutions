class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string,int>ump;
        int cnt =0;
        for(auto i:words)
        {
            if(ump.find(i)!=ump.end())cnt++;
            string s  = i;
            reverse(s.begin(),s.end());
            ump[s]++;
        }
        return cnt;
    }
};
