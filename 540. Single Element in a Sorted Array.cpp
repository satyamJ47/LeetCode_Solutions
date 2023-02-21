class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>ump;
        for(auto i:nums)
        {
            ump[i]++;
        }
        for(auto i:ump)if(i.second==1)return i.first;
        return 0;
    }
};
