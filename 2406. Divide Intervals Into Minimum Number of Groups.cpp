class Solution {
public:

    int minGroups(vector<vector<int>>& intr) {
        sort(intr.begin(),intr.end());
        // min heap
        priority_queue<int, vector<int>, greater<int>> pq;

        for(auto i:intr)
        {
            if(!pq.empty() && pq.top()<i[0])
            {
                pq.pop();
            }
            pq.push(i[1]);
        }
        return pq.size(); 
    }
};
