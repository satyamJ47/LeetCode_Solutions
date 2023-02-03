class Solution {
public:
    string convert(string s, int rows) {
        vector<string>v(rows,"");
        int i=0;
        while(i<s.length())
        {
            for(int j=0;j<rows && i<s.length();j++)
            {
                v[j]+=s[i++];
            }
            for(int k=rows-2;i<s.length() && k>=1;k--)
            {
                v[k]+=s[i++];
            }
        }
        string ans="";
        for(auto i:v)ans+=i;
        return ans;
    }
};
