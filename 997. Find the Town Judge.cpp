class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // int judge=trust[0][1]; 
        unordered_map<int,int>j,t; 
        if(trust.size()==0){if(n==1)return 1;else return -1;} 
        for(auto i:trust)
        {
            t[i[0]]++;
            j[i[1]]++;
        }
        int judge;
        for(auto i:j)
        {
            if(i.second==n-1 && t.find(i.first)==t.end())return i.first;
        }
        return -1;
    }
};
