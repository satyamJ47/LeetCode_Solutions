class Solution {
public:
    string simplifyPath(string s) {
        stack<string>st;
        string t="";
        // int l=0;
        for(int r=0;r<s.length();r++)
        {
            if(s[r]=='/'){
                if(t.length()>0)
                {
                    cout<<t<<endl;
                    if(!st.empty()&&t=="..")st.pop();
                    else if(t!="."&&t!="..")st.push(t);
                    t="";
                }
                // l=r;
            }
            else 
            {
                t+=s[r];
            }
        }
        if(t.length()>0)
                {
                    cout<<t<<endl;
                    if(!st.empty()&&t=="..")st.pop();
                    else if(t!="."&&t!="..")st.push(t);
                    t="";
                }
        string res="";
        while(!st.empty())
        {
            res.insert(0,"/"+st.top());
            // res+=st.top();
            st.pop();
            
        }
        return res.size()?res:"/";
    }
};
