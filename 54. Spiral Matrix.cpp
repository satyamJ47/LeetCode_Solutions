class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        vector<int> v;
        int k=0;
        int i=0,j=0;
        int m=a.size();
        int n=a[0].size();
        int l=min(m,n);cout<<l;
        int c=m*n;
        int f=4;
        while(k<=l/2)
        {
            while(j<n-k)
            {
                f=1;
                cout<<"right ";
                v.push_back(a[i][j]);
                cout<<i<<j<<" ";
                j++;
            }
            if(f!=1)break;
            j--;
            i++; 
            while(i<m-k )
            {
                f=2;
                cout<<"down ";
                v.push_back(a[i][j]);
                cout<<i<<j<<" ";
                i++;
            }
            if(f!=2)break;
            i--;
            j--;
            while(j>=k )
            {
                f=3;
                cout<<"left ";
                v.push_back(a[i][j]);
                cout<<i<<j<<" ";
                j--;
            }
            if(f!=3)break;
            j++;
            i--;
            while(i>k )
            {
                f=4;
                cout<<"up ";
                v.push_back(a[i][j]);
                cout<<i<<j<<" ";
                i--;
            }
            if(f!=4)break;
            i++;
            j++;
            k++;
        }
        return v;
    }
};