class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        long long pos=0,neg=0;
        // int count=0;
        if(k==0 && nums1!=nums2)return -1;
        if(k==0)return 0;
        for(int i=0;i<nums1.size();i++)
        {
            long long diff=nums2[i]-nums1[i];
            // cout<<diff<<" ";
            if(diff%k==0)
            {   
                long long d=abs(diff/k);
                // cout<<d<<" ";
                if(diff>0)pos+=d;
                else neg+=d;
                // cout<<pos<<" "<<neg<<endl;
            }
            else return -1;
        }
        if(neg==pos)return pos;
        return -1;
        
    }
};