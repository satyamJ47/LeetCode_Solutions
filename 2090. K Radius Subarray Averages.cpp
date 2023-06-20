class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long>pre(n,0);
        pre[0] = nums[0];
        for(int i=1;i<n;i++)pre[i] = nums[i]+pre[i-1];

        vector<int>res(n,-1);
        int left = -1, right=2*k;;
        for(int i=k;i<n-k;i++)
        {
            // cout<<left<<" "<<right<<endl;
            if(left>=0)
            res[i] = (int)((pre[right] - pre[left])/((2*k)+1));
            else  
            res[i] = (int)((pre[right])/((2*k)+1));
            left++;right++;
        }
        return res;
    }
};
