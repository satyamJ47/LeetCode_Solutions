class Solution {
public:
   
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum = 0;
        unordered_map<int,int>pre_freq;
        pre_freq[0] = 1;
        int cnt = 0;
        for(auto i:nums)
        {
            sum+=i;
            if(pre_freq.find(sum-goal)!=pre_freq.end())cnt+=pre_freq[sum-goal];
            pre_freq[sum]++;
        }
        return cnt;
    }
};
