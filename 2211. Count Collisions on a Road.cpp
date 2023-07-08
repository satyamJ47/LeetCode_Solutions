class Solution {
public:
    int countCollisions(string direct) {
        int n = direct.size();
        cout<<n<<" ";
        for(int i=n-1;i>=0;i--){
            if(direct[i] == 'R')n--;
            else break;
        }
        cout<<n<<endl;
        int accidents = 0;
        int s = 0;
        for(int i=0;i<n;i++)
        {
            if(direct[i] == 'L' && accidents == 0 && s==0)continue;
            if(direct[i]!='S')accidents++;
            else s = 1;
        }
        return accidents;
    }
};
