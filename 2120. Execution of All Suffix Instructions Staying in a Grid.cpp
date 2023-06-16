class Solution {
public:
    int traverse(int n, vector<int>& startPos, string s)
    {
        int i = startPos[0];
        int j = startPos[1];
        int cnt = 0;
        // cout<<s<<endl;
        for(auto d:s)
        {
            // cout<<i<<" "<<j<<endl;
            if(d=='L' && j>0){j-=1;}
            else if(d=='R' && j<n-1){j+=1;}
            else if(d=='U' && i>0){i-=1;}
            else if(d=='D' && i<n-1){i+=1;}
            else break;
            cnt++;
        }
        // cout<<i<<" "<<j<<endl;
        return cnt;
    }
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int>v;
        for(int i=0;i<s.size();i++)
        {
            v.push_back(traverse(n,startPos,s.substr(i,s.size()-i)));
        }
        return v;
    }
};
