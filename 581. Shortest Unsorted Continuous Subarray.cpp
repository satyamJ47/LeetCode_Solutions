class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back(make_pair(nums[i],i));
        }   
        sort(v.begin(),v.end());
        int k=0;
        int l=0,r=0;
        int flag=0;
        for(auto i:v)
        {
            if(i.second!=k && flag==0){l=k;flag=1;}
            if(flag && i.second!=k)r=k;
            k++;
        }
        if(flag==0)return 0;
        return r-l+1;
    }
};