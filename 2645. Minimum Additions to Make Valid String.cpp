class Solution {
public:
    int addMinimum(string word) {
        stack<char>st;
        int cnt = 0;
        for(auto i:word)
        {
            if(st.empty() || st.top()<i)st.push(i);
            else {cnt+=(3-st.size());while(!st.empty())st.pop();st.push(i);}
        }
        if(!st.empty())cnt+=(3-st.size());
        return cnt;
    }
};
