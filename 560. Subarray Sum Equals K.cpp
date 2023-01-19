class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int sum=0;
        unordered_map<int,int>ump;
        ump[0]=1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(ump.find(sum-k)!=ump.end()){count+=ump[sum-k];}
            ump[sum]++;
        }
        return count;
    }
};