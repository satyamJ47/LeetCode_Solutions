class Solution {
public:
    string reverseWords(string s) {
        int k = s.length()-1;
        while(k>=0 && s[k]==' '){s.pop_back();k--;}
        reverse(s.begin(),s.end());
        k = s.length()-1;
        while(k>=0 && s[k]==' '){s.pop_back();k--;}
        // for(int i=s.size()-1;i>=0;i--)if(s[i]==' ')s.pop_back();
        // cout<<s<<endl;
        int j = 0;
        for(int i=0;i<s.size();i++)
        {
            // if(s[j]==' '){j++;continue;}
            if(s[i]==' ')
            {
                reverse(s.begin()+j,s.begin()+i);
                j=i+1;
            }
        }
        reverse(s.begin()+j,s.end());
        string res = "";
        int space = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')space++;
            else space = 0;
            if(space>=2){continue;}
            res+=s[i];
        }
        return res;
    }
};
