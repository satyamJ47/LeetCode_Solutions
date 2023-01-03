class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>cnt;
        for(auto i:arr)cnt[i]++;
        int max=-1;
        for(auto i:cnt)if(i.first==i.second && i.first>max)max=i.first;
        return max;
    }
};