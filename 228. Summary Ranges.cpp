class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        if(n==0)return {};
        vector<string>v;
        int start = nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[i-1]+1)
            {
                // int x = stoi(v.back());
                if(start!=nums[i-1])
                {
                    string s = to_string(start);
                    s+="->";
                    s+=to_string(nums[i-1]);
                    // v.pop();
                    v.push_back(s);
                }
                else {
                    v.push_back(to_string(nums[i-1]));
                }
                start = nums[i];
            }
        }
        if(start == nums[n-1])v.push_back(to_string(nums[n-1]));
        else v.push_back(to_string(start)+"->"+to_string(nums[n-1]));
        return v;
    }
};
