class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int low = 1, high = *max_element(candies.begin(),candies.end());
        // cout<<high;
        long long t;
        int res = 0;
        while(low<=high)
        {
            t = 0;
            int mid = (low+high)/2;
            
            for(auto i:candies)
            {
                t+=(i/mid);
            }
            // cout<<mid<<" "<<t<<endl;
            if(t>=k)
            {
                res = max(res,mid);
                low = mid+1;
            }
            else{
                high = mid-1;
            }
            
        }
        return res;
    }
};
