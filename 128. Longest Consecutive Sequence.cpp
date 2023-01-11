class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0,max=0;
        if(nums.size()==0)return 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==0)continue;
            if(nums[i]-nums[i-1]==1)
            {
                count++;
            }
            else{
                if(max<count)max=count;
                count=0;
            }
        }
        if(max<count)max=count;
        return max+1;
    }
};