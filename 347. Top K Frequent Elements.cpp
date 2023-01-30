class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int ,int>freq;
        priority_queue<pair<int,int>>pq;
        for(auto i:nums)freq[i]++;
        for(auto i:freq)pq.push(make_pair(i.second,i.first));
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            int t=pq.top().second;pq.pop();
            ans.push_back(t);
        }
        return ans;
    }
};
