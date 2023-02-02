class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        for(int i=1;i<words.size();i++)
        {
            // cout<<"i "<<i<<endl;
            int j=0;
            while(j<words[i-1].length() && j<words[i].length())
            {
                int a=order.find(words[i-1][j]);
                int b=order.find(words[i][j]);
                // cout<<a<<" "<<b<<endl;
                if(a<b)break;
                if(a>b)return false;
                // cout<<j<<endl;
                j++;
                
            }
            if(j>=words[i].length() && j<words[i-1].length())return false;
        }
        return true;
    }
};
