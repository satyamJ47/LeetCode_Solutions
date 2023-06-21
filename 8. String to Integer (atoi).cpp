class Solution {
public:
    int myAtoi(string s) {
        string t = "";
        bool start = true;
        bool sign = true;
        // cout<<'0'-0<<endl;
        for(auto i:s)
        {
            if((i==' ' )&& start)continue;
            else if((i!='-' && i!='+') && (i-0 < 48 || i-0 > 57))
            {
                break;
            }
            else{
                if(i=='-' || i=='+' ){if(!sign)break;sign = false;}
                start = false;
                sign = false;
                t+=i;
            }
        }
        // cout<<t<<endl;
        int neg = 1;
        long long res = 0;
        for(auto i:t)
        {
            // cout<<res<<endl;
            if(i=='-')neg=-1;
            else if(i=='+')continue;
            else{
                res=(res*10);
                cout<<" "<<(i-'0')<<endl;
                res+=(i-'0');
                // neg = 1;
            }
            if(res*neg>pow(2,31)-1)return pow(2,31)-1; 
            if(res*neg<-pow(2,31))return -pow(2,31); 
        }
        // if(neg)res*=(-1);
        // if(res>pow(2,31)-1)return pow(2,31)-1; 
        // if(res<-pow(2,31))return -pow(2,31);
        // cout<<res<<endl; 
        return res*neg;
        return 0;   
    }
};
