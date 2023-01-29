class Solution {
public:
    int distinctIntegers(int n) {
        vector<int>v;
        int c=0;
        v.push_back(n);
        for(int i=0;i<v.size();i++)
        {
            for(int j=v[i];j>=2;j--)
            {
                if(v[i]%j==1 && !count(v.begin(), v.end(), j)){v.push_back(j);c++;}
            }
        }
        return c+1;
    }
};
