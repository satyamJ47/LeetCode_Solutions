class Solution {
public:
    string smallestString(string s) {
        bool flag = true;
        for(int i=0;i<s.length();i++)
        {
            if(flag && s[i]=='a')continue;
            else {
                flag = false;
                if(s[i]!='a')s[i]--;
                else break;
            }
        }
        if(flag)s[s.length()-1]='z';
        return s;
    }
};
