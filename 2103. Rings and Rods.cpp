class Solution {
public:
    int countPoints(string rings) {
        int n = rings.size();
        vector<vector<int>>v(10,vector<int>(3,-1));
        // for(auto i:v)cout<<i[0]<<i[1]<<i[2]<<endl;
        int count=0;
        for(int i=1;i<n;i=i+2)
        {
            if(rings[i-1]=='R')v[rings[i]-'0'][0]=1;
            else if(rings[i-1]=='G')v[rings[i]-'0'][1]=1;
            else if(rings[i-1]=='B')v[rings[i]-'0'][2]=1;
            // cout<<i<<" "<<rings[i]<<endl;
        }
        for(auto i:v)
        {
            if(i[0]==1 && i[1]==1 && i[2]==1)count++;
        }
        return count;
    }
};
