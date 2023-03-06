class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        
        int l = 0,r = nums.size()-1;
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if(nums[mid]-1-mid<k)l=mid+1;
            else r = mid-1;
        }
        return l+k;
    }
};
