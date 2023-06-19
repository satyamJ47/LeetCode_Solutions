class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0;
        int res = 0;
        for(auto i:gain){
            altitude+=i;
            res = max(res,altitude);
        }
        return res;
    }
};
