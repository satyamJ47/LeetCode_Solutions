class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>ump;
        for(auto i:tasks)ump[i]++;
        int round=0;
        for(auto i:ump)
        {
            if(i.second==1)return -1;
            if(i.second%3==0)
                round+=(i.second/3);
            else
                round+=(i.second/3)+1;
        }
        return round;
    }
};