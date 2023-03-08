class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>ump;
        for(auto i:s)ump[i]++;
        string ans="";
        for(auto i:order)
        {
            if(ump.find(i)!=ump.end())
            {
                while(ump[i]>0){ans+=i;ump[i]--;}
            }
        }
        for(auto i:ump)
        {
            while(i.second>0){ans+=i.first;i.second--;}
        }
        return ans;
    }
};
