class Solution {
public:
    bool makeStringsEqual(string s, string t) {
        int s0=0,s1=0,t0=0,t1=0;
        if(s==t)return true;
        if(s.length()==2)
        {
            if((s=="01" ||  s=="10" || s=="11") && (t=="10" || t=="01" || t=="11"))return true;
               else return false;
        }
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')s1++;
            else s0++;
            
            if(t[i]=='1')t1++;
            else t0++;
        }
        cout<<t0<<" "<<s1;
        if((s0==s.length() && t1>=1  )|| (t0==s.length() && s1>=1) )return false;
        return true;
    }
};
