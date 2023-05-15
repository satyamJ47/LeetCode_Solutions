 class Solution {
public:
    int solve(vector<int>& nums,vector<bool>&visited,int operation,unordered_map<vector<bool>,int>&mp)
    {
        if(mp.count(visited))return mp[visited];
        int maxscore = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(visited[i])continue;
            visited[i] = true;
            for(int j=i+1;j<nums.size();j++)
            {
                if(visited[j])continue;
                visited[j] = true;
                // maxscore = operation*gcd(nums[i],nums[j]);
                maxscore = max(maxscore,operation*gcd(nums[i],nums[j]) + solve(nums,visited,operation+1,mp));
                visited[j] = false;
            }
            visited[i] = false;
        }
        // return maxscore;
        return mp[visited] = maxscore;
    }

    int maxScore(vector<int>& nums) {
        int n = nums.size();
        unordered_map<vector<bool>,int>mp;
        vector<bool>visited(n,false);
        return solve(nums,visited,1,mp);
    }
};
