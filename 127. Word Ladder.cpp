class Solution {
public:
    int ladderLength(string start, string target, vector<string>& words) {
        
        int level = 1;
        set<string>st;
        for(auto i:words){
            st.insert(i);
        }
        queue<pair<string,int>>q;
        q.push({start,1});
        while(!q.empty())
        {
            start = q.front().first;
            level = q.front().second;
            q.pop();
            for(int i=0;i<start.length();i++)
            {   
                string t = start;
                for(char c='a';c<='z';c++)
                {
                    t[i] = c;
                    if(st.find(t)!=st.end())
                    {
                        if(t == target){
                            return level+1;
                        } 
                        q.push({t,level+1});  
                        st.erase(t);
                    }
                }
            }
        }
        return 0;

    }
};
