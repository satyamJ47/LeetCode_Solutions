class Solution {
public:
    int splitNum(int num) {
        string s = to_string(num);
        sort(s.begin(),s.end());
        string t1 = "",t2 = "";
        for(int i=0;i<s.length();i+=2)
        {
            t1+=s[i];
        }
        for(int i=1;i<s.length();i+=2)
        {
            t2+=s[i];
        }
        int x1 = stoi(t1);
        int x2 = stoi(t2);
        return x1+x2;
    }
};
