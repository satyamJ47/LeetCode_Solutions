class Solution {
public:
    int passThePillow(int n, int time) {
        
        int i=1;
        while(time>0)
        {
            while(time>0&& i<n)
            {
                i++;time--;
                // cout<<i<<" "<<time<<endl;
            }
            while(time>0 && i>1)
            {
                i--;time--;
                //  cout<<i<<" "<<time<<endl;
            }
        }
        return i;
        
    }
};
