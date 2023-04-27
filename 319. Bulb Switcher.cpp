class Solution {
public:
    int bulbSwitch(int n) {
        int cnt = 0;
        for(int i=1;i<=n;i++)
        {
            if(i*i<=n)cnt++;
            else break;
        }
        return cnt;
    }
};
