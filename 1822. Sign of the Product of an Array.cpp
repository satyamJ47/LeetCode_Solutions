class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg = 0;
        for(auto i:nums){
            if(i==0)return 0;
            if(i<0)
            neg++;
        }
        // cout<<neg<<endl;
        if(neg%2==0)return 1;
        return -1;
    }
};
