class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        // return{};
        set<int>s1,s2;
        vector<int>v(a.size());
        for(int i=0;i<a.size();i++)
        {
            int x = 0;
            s1.insert(a[i]);
            if(s2.find(a[i])!=s2.end())x++;
            s2.insert(b[i]);
            if(s1.find(b[i])!=s1.end())x++;
            if(i>0)
            v[i]=v[i-1]+x;
            else
                v[i]=x;
        }
        return v;
    }
};
