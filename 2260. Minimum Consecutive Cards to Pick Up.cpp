class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int>ump;
        int len=INT_MAX;
        for(int i=0;i<cards.size();i++)
        {
            if(ump.find(cards[i])!=ump.end())
            {
                int cur=i-ump[cards[i]]+1;
                if(len>cur)
                {
                    len=cur;
                }
            }
            ump[cards[i]]=i;
        }
        if(len==INT_MAX)return -1;
        return len;
    }
};