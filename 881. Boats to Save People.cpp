class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int start=0;

        int ans = 0;
        for(int end=people.size()-1;end>=0 && start<=end;end--)
        {
            if(people[start]+people[end]<=limit){start++;}
            ans++;
        }
        return ans;
    }
};
