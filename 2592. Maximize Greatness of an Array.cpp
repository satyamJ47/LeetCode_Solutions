class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=0;
        for(i=0,j=1;j<nums.size();i++)
        {
            while(j<nums.size()&&nums[j]==nums[i])j++;
            if(j==nums.size())break;
            j++;
            // cnt++;
        }
        // cout<<i<<" "<<j;
        return i;
    }
};
