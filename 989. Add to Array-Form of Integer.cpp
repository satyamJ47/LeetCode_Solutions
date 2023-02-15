class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        int carry=0;
        int i=nums.size()-1;
        vector<int>v;
        int ans=0;
        while(carry || i>=0 || k)
        {
            
            ans=carry;
            // carry=0;
            if(i>=0)ans+=nums[i];
            if(k)ans+=(k%10);
            k/=10;
            carry=ans/10;
            ans%=10;
            v.push_back(ans);
            i--;
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
