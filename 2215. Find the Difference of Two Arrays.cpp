class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
        set<int>s1,s2;
        for(auto i:nums1)
        {
            if(!count(nums2.begin(),nums2.end(),i))
            {
                s1.insert(i);
            }
        }
        
        for(auto i:nums2)
        {
            if(!count(nums1.begin(),nums1.end(),i))
            {
                s2.insert(i);
            }
        }
        vector<int>v1,v2;
        for(auto i:s1)v1.push_back(i);
        for(auto i:s2)v2.push_back(i);
        return {v1,v2};
    }
};
