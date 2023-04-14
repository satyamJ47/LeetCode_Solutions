class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        int sum = 0;
        vector<int>v;
        for(int i=0;i<reward1.size();i++)
        {
            sum+=reward2[i];
            v.emplace_back(reward1[i]-reward2[i]);
        }
        sort(v.rbegin(),v.rend());
        int i=0;
        while(k--)
        {
            sum+=v[i++];
        }
        return sum;
    }
};
