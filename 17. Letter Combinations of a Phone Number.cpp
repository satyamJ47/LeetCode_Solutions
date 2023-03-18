class Solution {
public:
    void solve(int i,string digits,string combo,vector<string>&v,vector<string>&ans)
    {
        if(i==digits.length()){if(combo.length())ans.push_back(combo);return;}

        int num = int(digits[i]) - 48;
        // cout<<num<<endl;
        for(int j=0;j<v[num].length();j++)
        {
            // combo+=v[num][j];
            solve(i+1,digits,combo+v[num][j],v,ans);
        }
        return;
    }

    vector<string> letterCombinations(string digits) {
        vector<string>v{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        solve(0,digits,"",v,ans);
        return ans;
    }
};
