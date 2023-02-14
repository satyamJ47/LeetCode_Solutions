class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1; 
        int j=b.length()-1; 
        int carry=0;
        string res="";
        while(carry || i>=0 || j>=0)
        {
            string ans="0";
            if(carry){carry--;ans="1";}
            if(i>=0)
            {
                if((a[i]=='1' && ans=="0") || (a[i]=='0' && ans=="1"))ans="1";
                else if(a[i]=='1' && ans=="1"){carry++;ans="0";}
                else ans="0";
            }
            if(j>=0)
            {
                if((b[j]=='1' && ans=="0") || (b[j]=='0' && ans=="1"))ans="1";
                else if(b[j]=='1' && ans=="1"){carry++;ans="0";}
                else ans="0";
            }
            // res+=ans;
            // res.insert(0,ans);
            res.insert(0, ans);
            i--;j--;
        }
        // reverse(res.begin(),res.end());
        return res;

    }
};
