class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto i:nums)pq.push(i);
        long long score=0;
        while(k--)
        {
            int n = pq.top();pq.pop();
            score+=n;
            int x = ceil((double)n/3);
            pq.push(x);
        }
        return score;
    }
};