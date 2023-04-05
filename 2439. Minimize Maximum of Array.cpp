class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long total = 0;
        int res = 0; 
        for(int i=0;i<nums.size();i++)
        {
            total+=nums[i];
            int x = ceil((double)total/(i+1));
            res = max(res,x);
        }
        return res;
    }
};
