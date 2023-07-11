class Solution {
public:
    vector<string> printVertically(string s) {
        string t = "";
        vector<string>v;
        int maxlen = 0;
        for(auto i:s)
        {
            if(i==' '){
                int len = t.length();
                maxlen = max(maxlen,len);
                v.push_back(t);
                t="";
            }
            else t+=i;
        }
        int len = t.length();
        maxlen = max(maxlen,len);
        v.push_back(t);

        vector<string>res;
        for(int i=0;i<maxlen;i++)
        {
            t="";
            for(int j=0;j<v.size();j++)
            {
                if(i<v[j].length())t+=v[j][i];
                else t+=' ';
            }
            int k = t.size()-1;
            while(k>=0&&t[k]==' ')
            {
                t.pop_back();
                k--;
            }
            res.push_back(t);
        }
        return res;
    }
};
