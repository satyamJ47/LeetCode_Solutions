class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        string mini = s;
        char y = s[0];
        char x = s[0];
        for(auto i:s)
        {
            if(i!='9'){
                x  = i;
                break;
            }
            
        }
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==x){s[i]='9';}
            if(mini[i]==y)mini[i]='0';
        }
        
    
        // cout<<s<<" "<<mini<<endl;
        int a = stoi(s);
        int b = stoi(mini);
        
        return abs(a-b);
    }
};
