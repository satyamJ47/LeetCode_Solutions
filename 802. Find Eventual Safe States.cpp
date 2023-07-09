class Solution {
public:
    bool dfs(int node,vector<vector<int>>& graph,vector<int>&visited,vector<int>&path)
    {
        // 
        visited[node] = 1;
        path[node] = 1;
        for(auto v:graph[node])
        {
            if(path[v])return true;
            if(!visited[v])
            {
                if(dfs(v,graph,visited,path))return true;
            }
        }
        path[node] = 0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int>visited(V,0);
        vector<int>path(V,0);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,graph,visited,path);
            }
        }
        vector<int>res;
        for(int i=0;i<V;i++){
            if(!path[i])res.push_back(i);
        }
        return res;
    }
};
