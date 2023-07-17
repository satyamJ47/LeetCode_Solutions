class Solution {
public: 
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        queue<vector<int>>q;
        vector<int>dist(n,1e9);
        vector<pair<int,int>>adj[n];
        for(auto e:flights)
        {
            adj[e[0]].push_back({e[1],e[2]});
        }
        dist[src] = 0;
        q.push({0,src,0});
        int res = INT_MAX;
        while(!q.empty())
        {
            int cost = q.front()[0];
            int node = q.front()[1];
            int stop = q.front()[2]+1;
            if(node == dst){
                res = min(res,cost);
            }
            q.pop();
            for(auto i:adj[node])
            {
                int v = i.first;
                int wt = i.second;
                if(stop<=k){
                    if(cost+wt<dist[v])
                    {
                        dist[v] = cost+wt;
                        q.push({dist[v],v,stop});
                    }
                }
                else if(v == dst && cost+wt<dist[v]){
                    dist[v] = cost+wt;
                    q.push({dist[v],v,stop});
                }
            }
        }
        return res<INT_MAX?res:-1;
    }
};
