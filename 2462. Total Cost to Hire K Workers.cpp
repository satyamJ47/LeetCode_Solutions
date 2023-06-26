
 class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<pair<int,int>>pq;
        int i=0,j=costs.size()-1;
        int cand = 0;
        while(i<=j && cand<candidates){
            if(i<=j)
            pq.push({-costs[i++],1});
            if(i<=j)
            pq.push({-costs[j--],0});
            cand++;
        }
        // cout<<i<<" "<<j<<endl;
        long long res = 0;
        while(k--)
        {
            res+=(-pq.top().first);
            int id = pq.top().second;
            // cout<<-pq.top().first;
            pq.pop();
            if(i<=j)
            {
                if(id)
                pq.push({-costs[i++],1});
                else
                pq.push({-costs[j--],0});
            }
            // cout<<" "<<res<<endl;
        }
        return res;
    }
};
