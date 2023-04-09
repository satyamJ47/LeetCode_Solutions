class Solution {
public:
    bool isPrime(int n)
    {
        if(n==1)return false;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        
        int n = nums.size();
        int maxi = 0;
        for(int i=0;i<nums.size();i++)
        {
            int l = nums[i][i];
            int r = nums[i][n-1-i];
            if(l>maxi && isPrime(l))
            maxi=max(l,maxi);
            if(r>maxi && isPrime(r))
            maxi=max(r,maxi);
        }
        return maxi;
    }
};
