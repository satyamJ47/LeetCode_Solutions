class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>ump;
        vector<int>v;
        for(auto i:nums){ump[i]++;if(ump[i]==2)v.push_back(i);}
        return v;
    }
};
