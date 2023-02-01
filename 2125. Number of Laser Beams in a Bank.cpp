class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int laser=0;
        int prevcount=0;

        for(int i=0;i<bank.size();i++)
        {
            int curcount=0;
            for(auto j:bank[i])
            {
                if(j=='1')curcount++;
            }
            laser+=(curcount*prevcount);
            if(curcount!=0)
                prevcount=curcount;
        }
        return laser;
    }
};
