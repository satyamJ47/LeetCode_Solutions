class Solution {
public:
    bool isVowel(char x)
    {
        if(x=='a' ||x=='e' ||x=='i' ||x=='o' ||x=='u')return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int n = s.size();
        int cnt = 0;
        int i=0;
        for(i=0;i<k;i++)if(isVowel(s[i]))cnt++;
        int q = 0;
        int res = cnt;
        for(int p=i;p<n;p++,q++)
        {
            if(isVowel(s[p]))cnt++;
            if(isVowel(s[q]))cnt--;
            res = max(cnt,res);
        }
        return res;
    }
};
