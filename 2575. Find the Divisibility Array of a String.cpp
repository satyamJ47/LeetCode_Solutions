class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        long long rem = 0,temp;
        vector<int>v;
        for(auto i:word){
            temp = (rem*10) + (i -'0');
            rem = temp % m;
            if(rem==0)v.push_back(1);
            else v.push_back(0);   
        }
        return v;
    }
};
