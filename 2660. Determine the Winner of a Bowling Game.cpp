class Solution {
public:
    int isWinner(vector<int>& p1, vector<int>& p2) {
        int s1 = 0,s2 = 0;
        int x = 0;
        for(int i=0;i<p1.size();i++)
        {
            
            if(x){s1+=(2*p1[i]);x--;}
            else s1+=p1[i];
            if(p1[i]==10){x=2;}
        }
        x = 0;
        for(int i=0;i<p2.size();i++)
        {
            
            if(x){s2+=(2*p2[i]);x--;}
            else s2+=p2[i];
            if(p2[i]==10){x=2;}
        }
        cout<<s1<<" "<<s2<<endl;
        if(s1>s2)return 1;
        else if(s2>s1)return 2;
        return 0;
    }
};
