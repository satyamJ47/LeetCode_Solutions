class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int>mp;
        int l=0,r=0;
        int n= fruits.size();
        int ans=0;

        for(r=0;r<n;r++)
        {
            mp[fruits[r]]++;
            while(mp.size()>=3)
            {
                ans=max(ans,r-l);
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0)
                {
                    mp.erase(fruits[l]);
                }
                l++;
            }
            
        }
        ans=max(ans,r-l);
        return ans;
    }
};
