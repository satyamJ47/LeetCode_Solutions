class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0;
        for(auto p:patterns)
        {
            // int flag = 1;
            for(int i=0;i<word.length();i++)
            {
                if(word[i]==p[0]){
                    if(p == word.substr(i,p.length())){cnt++;break;}
                }
            }
        
        }
        return cnt;
    }
};
