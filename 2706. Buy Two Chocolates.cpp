class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int mini1=101,mini2=101;
        for(auto i:prices)
        {
            if(i<mini1){
                mini2 = mini1;
                mini1 = i;
            }
            else if(mini2 > i)
            {
                mini2 = i;
            }
        
        }cout<<mini1<<" "<<mini2<<endl;
        if(money - (mini1 + mini2) >= 0)return money - (mini1 + mini2);
        return money;
    }
};
