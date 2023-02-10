class Solution {
public:
    int largestInteger(int n) {
        vector<int>v,e,o;
        while(n)
        {
            int d = n%10;
            v.push_back(d);
            if(d%2==0)e.push_back(d);
            else o.push_back(d);
            n/=10;
        }
        sort(e.begin(),e.end());
        sort(o.begin(),o.end());
        // for(auto i:v)cout<<i<<" ";cout<<endl;
        // for(auto i:e)cout<<i<<" ";cout<<endl;
        // for(auto i:o)cout<<i<<" ";
        int x=0;
        int k=e.size()-1,l=o.size()-1;
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]%2==0)
            {
                x*=10;
                x+=e[k--];
            }
            else{
                x*=10;
                x+=o[l--];
            }
        }
        return x;
    }
};
