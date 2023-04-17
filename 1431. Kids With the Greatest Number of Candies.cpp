class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi =  *max_element(candies.begin(),candies.end());
        vector<bool>v;
        for(auto i:candies)
        {
            if(extraCandies + i >= maxi)v.push_back(true);
            else v.push_back(false);    
        }
        return v;
    }
};
