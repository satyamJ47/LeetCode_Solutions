class Solution {
public:
    void solve(int indx,string s,vector<string>path,vector<vector<string>>&ans)
    {
        if(indx==s.length())
        {
            ans.push_back(path);
            return;
        }
        for(int i=indx;i<s.length();i++)
        {
            if(isPalindrome(indx,i,s))
            {
                path.push_back(s.substr(indx,i-indx+1));
                solve(i+1,s,path,ans);
                path.pop_back();
            }
        }
    }

    bool isPalindrome(int start,int end,string s)
    {
        while(start<end)
        {
            if(s[start++]!=s[end--])return false;
        }
        return true;
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>path;
        solve(0,s,path,ans);
        return ans;
    }
};