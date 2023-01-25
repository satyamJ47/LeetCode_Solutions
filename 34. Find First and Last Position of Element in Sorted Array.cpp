class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        int f=0;
        for(int i=0;i<nums.size();i++)
        {
            if(f==0 && nums[i]==target)
            {
                v.push_back(i);
                f=1;
            }
            if(f && target!=nums[i])
            {
                v.push_back(i-1);
                return v;
            }
        }
        if(v.size()==1){v.push_back(nums.size()-1);return v;}
        return {-1,-1};
    }
};
