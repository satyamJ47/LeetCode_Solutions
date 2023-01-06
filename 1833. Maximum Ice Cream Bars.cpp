class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count=0;
        for(auto i:costs)
        {
            if(i<=coins)
            {
                coins-=i;
                count++;
            }
            else break;
        }
        return count;
    }
};