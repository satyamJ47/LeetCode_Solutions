class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>>p;
        for(int i=0;i<nums1.size();i++)
        {
            p.push_back({nums2[i],nums1[i]});
        }
        sort(p.rbegin(),p.rend());
        priority_queue<int>pq;
        long long sum = 0;
        int i;
        for(i=0;k>1;i++)
        {
            pq.push(-p[i].second);
            sum+=p[i].second;
            k--;
        }
        long long res = 0;
        for(int j=i;j<nums1.size();j++)
        {
            pq.push(-p[j].second);
            sum+=p[j].second;
            res = max(sum*p[j].first,res);

            sum+=pq.top();pq.pop();
        }
        return res;
    }
};
