class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        
        int maxi = 0;
        for(int i=0;i<nums.size();i++){
            int cnt = 0;
            if(nums[i]>threshold)continue;
            if(nums[i]%2==0){
                cnt++;
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]>threshold)break;
                    if(nums[j-1]%2 != nums[j]%2)cnt++;
                    else break;
                }
                maxi = max(cnt,maxi);
            }
        }
        return maxi;
    }
};
