class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto i:nums)pq.push(i);
        cout<<pq.size();
        while(k>1)
        {
            k--;
            pq.pop();
        }
        return pq.top();
    }
};
