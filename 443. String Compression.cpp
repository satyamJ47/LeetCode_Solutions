class Solution {
public:
    int compress(vector<char>& chars) {
        
        int cnt = 1;
        int k=0;
        if(chars.size()==1)return 1;
        for(int i=0;i<chars.size()-1;i++)
        {
            if(chars[i]==chars[i+1])cnt++;
            else{
                chars[k++] = chars[i];
                if(cnt>1)
                {
                    string s = to_string(cnt);
                    for(auto j:s)chars[k++] = j;
                }
                cnt=1;
            }
        }

            chars[k++] = chars[chars.size()-1];
                if(cnt>1)
                {
                    string s = to_string(cnt);
                    for(auto j:s)chars[k++] = j;
                }

      
        return k;
    }
};
