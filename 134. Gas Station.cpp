class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int gt=0,ct=0;
        for(int i=0;i<n;i++)
        {
            gt+=gas[i];
            ct+=cost[i];
        }
        if(gt<ct)return -1;

        int g=0,indx=0;
        for(int i=0;i<n;i++)
        {
           if(g<0)
           {
               indx=i;
               g=0;
           }
            g=g+gas[i]-cost[i];
        }
        return indx;
    }
};