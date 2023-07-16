class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        int n = heights.size(); 
        int m = heights[0].size(); 
        vector<vector<int>>dist(n,vector<int>(m,1e9));
        dist[0][0] = 0;
        pq.push({0,{0,0}});

        vector<int>di = {-1,1,0,0};
        vector<int>dj = {0,0,-1,1};
        int res = INT_MAX;
        while(!pq.empty())
        {
            int effort = pq.top().first;
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            if(x==n-1 && y==m-1){
                res = min(res,effort);
            }
            pq.pop();
            for(int i=0;i<4;i++)
            {
                int a = x+di[i];
                int b = y+dj[i];
                if(a>=0 && a<n && b>=0 && b<m)
                {
                    int dif = abs(heights[a][b]-heights[x][y]);
                    dif = max(dif,effort);
                    if(dif<dist[a][b]){
                        dist[a][b] = dif;
                        pq.push({dif,{a,b}});
                    }
                }
            }

        }
        return res;

    }
};
