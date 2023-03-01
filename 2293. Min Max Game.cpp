class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        
        while(!(nums.size()==1)){
        vector<int>t;
        for(int i=0;i<nums.size();i+=2)
        {
            if(i%4==0)t.push_back(min(nums[i],nums[i+1]));
            else t.push_back(max(nums[i],nums[i+1]));
        }
        nums=t;
        }
        return nums[0];
    }
};
