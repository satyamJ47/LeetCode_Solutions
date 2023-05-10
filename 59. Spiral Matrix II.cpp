class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v( n , vector<int> (n, 0));
        
        int c=1;
        int k=0;
        int i=0,j=0;
        while(k<=n/2)
        {
            while(j<n-k)
            {
                cout<<"right";
                // if(v[i][j]!=0)break;
                v[i][j]=c++;
                cout<<i<<" "<<j<<"  ";
                j++;
            }
            j--;
            i++; 
            while(i<n-k)
            {
                cout<<"down";
                // if(v[i][j]!=0)break;
                v[i][j]=c++;
                cout<<i<<" "<<j<<"  ";
                i++;
            }
            i--;
            j--;
            cout<<i<<" "<<j<<" "<<k;
            while(j>=k)
            {
                cout<<"left";
                // if(v[i][j]!=0)break;
                v[i][j]=c++;
                cout<<i<<" "<<j<<"  ";
                j--;
            }
            j++;
            i--;
            while(i>k)
            {
                cout<<"top";
                // if(v[i][j]!=0)break;
                v[i][j]=c++;
                cout<<i<<" "<<j<<"  ";
                i--;
            }
            i++;
            j++;
            k++;
        }
        return v;
    }
};
