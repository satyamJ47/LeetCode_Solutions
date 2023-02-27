class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int indx = 0;
        long long prev = 0;
        long long res = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0){indx++;prev = indx + prev; }
            else { res += prev; indx = 0; prev = 0;} 
            // cout << indx <<" "<<prev<<" "<<res<<endl;
        }
        if(nums[nums.size()-1]==0)res+=prev;
        return res;
    }
};
