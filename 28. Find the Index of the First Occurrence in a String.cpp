class Solution {
public:
    int strStr(string s, string t) {
        if(s.length()<t.length())return -1;

        for(int i=0;i<s.length();i++)
        {
            if(s[i] == t[0]){
                int k=i;
                while(k<s.length() && k-i<t.length() && s[k]==t[k-i])
                {
                    k++;
                }
                if(k-i==t.length())return i;
            }
        }
        return -1;
    }
};
