class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int>s,g;
        int b=0,c=0;
        for(int i=0;i<secret.length();i++)
        {
            if(secret[i]==guess[i])b++;
            else {s[secret[i]]++;g[guess[i]]++;}
        }

        for(auto i:s){
            int m=min(i.second,g[i.first]);
            c+=m;
        }

        cout<<b<<" "<<c;
        return to_string(b)+'A'+to_string(c)+'B';
    }
};