class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        int maxlen=0,len=0;
        int l=0,r=0;
        while(r<s.size())
        {
            if(st.find(s[r])==st.end())
            {
                st.insert(s[r]);
                len++;
                r++;
            }
            else{
                while(st.find(s[r])!=st.end()){
                    st.erase(s[l]);
                    len--;
                    l++;
                }
                
            }
            cout<<len<<endl;
            maxlen=max(maxlen,len);
        }
        return maxlen;
    }
};
