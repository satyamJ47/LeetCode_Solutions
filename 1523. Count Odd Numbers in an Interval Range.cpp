class Solution {
public:
    int countOdds(int low, int high) {
        int len = high - low + 1;
        if(len%2==0)
        {
            return len/2;
        }
        else{
            if(low%2==1)
            {
                return (len/2)+1;
            }
            else{
                return len/2;
            }
        }
        return 0;
    }
};
