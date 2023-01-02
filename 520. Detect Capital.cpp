class Solution {
public:
    bool detectCapitalUse(string word) {
        for(int i=1;i<word.length();i++)
        {
            if( ((isupper(word[i])) && !(isupper(word[i-1])) ) ||  ( (i>1) && (islower(word[i])) && !(islower(word[i-1])))){
                    return false; 
            }
        }
        return true;
    }
};