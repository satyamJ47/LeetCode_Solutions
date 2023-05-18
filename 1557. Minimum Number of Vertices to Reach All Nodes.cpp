class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        set<int>st;
        for(auto e:edges)
        {
            st.insert(e[1]);
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(st.find(i)==st.end())v.push_back(i);
        }
        return v;
    }
};
