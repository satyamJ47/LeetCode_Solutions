class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        fb.insert(fb.begin(),0);
        fb.push_back(0);
        int cnt = 0;
        for(int i=0;i<fb.size()&&n>0;i++)
        {
            if(fb[i]==0)cnt++;
            else{
                cnt = 0;
            }
            if(cnt==3){n--;cnt = 1;}
        }
        return n<=0;
    }
};
