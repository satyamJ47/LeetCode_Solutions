// Brute force
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        for(int i=0;i<n-2;i++)
        {
            int d = nums[i+1]-nums[i];
            for(int j=i+2;j<n;j++)
            {
                if(d == nums[j]-nums[j-1])
                {
                    if(j-i+1 >= 3)cnt++;
                }else break;
            }
        }
        return cnt;
    }
};


// optimized
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int n = A.size();
        if (n < 3) return 0;
        vector<int> dp(n, 0); 
        if (A[2]-A[1] == A[1]-A[0]) dp[2] = 1; 
        int result = dp[2];
        for (int i = 3; i < n; ++i) {
 
            if (A[i]-A[i-1] == A[i-1]-A[i-2]) 
                dp[i] = dp[i-1] + 1;
            result += dp[i]; 
        }
        return result;
    }

};
