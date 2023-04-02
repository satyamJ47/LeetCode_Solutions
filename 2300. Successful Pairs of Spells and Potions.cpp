class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>v;
        for(int i=0;i<spells.size();i++)
        {
            int left = 0,mid;
            int right = potions.size();
            while(left<right)
            {
                cout<<left<<" "<<right<<" ";
                mid = left + (right-left)/2;
                if((long long)spells[i]*potions[mid]>=success)right = mid;
                else left = mid+1;
                cout<<mid<<endl;
                
            }
            cout<<left<<" "<<right<<" "<<mid<<endl;
            v.push_back(potions.size() - left);
        }
        return v;
    }
};
