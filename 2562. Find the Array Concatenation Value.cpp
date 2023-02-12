class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        stack<int>s;
        int l=0,r=nums.size()-1;
        long long sum=0;
        while(l<=r)
        {
            int t = nums[l];
            int k=nums[r];
            while(k && l!=r)
            {
                s.push(k%10);
                k/=10;
            }
            while(!s.empty())
            {
                t*=10;
                t+=s.top();
                s.pop();
            }
            sum+=t;
            l++;
            r--;
        }
        return sum;
    }
};
