class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        for(int i=0;i<n-2;i++)
        {
            int d = nums[i+1]-nums[i];
            for(int j=i+2;j<n;j++)
            {
                if(d == nums[j]-nums[j-1])
                {
                    if(j-i+1 >= 3)cnt++;
                }else break;
            }
        }
        return cnt;
    }
};
