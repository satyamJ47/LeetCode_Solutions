class Solution {
public:
    int dfs(int node,vector<vector<int>>& rooms,vector<int>&visited)
    {
        visited[node] = 1;
        int cnt = 1;
        for(auto v:rooms[node])
        {
            if(!visited[v])cnt+=dfs(v,rooms,visited);
        }
        return cnt;
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int>visited(n,0);
        int cnt = dfs(0,rooms,visited);
        // cout<<cnt<<endl;
        return cnt==n?true:false;
        // for(auto i:visited){if(i==0)return false;}
        // return true;
    }
};
