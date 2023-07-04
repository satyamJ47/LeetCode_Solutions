class Solution {
public:
    vector<int>isPrime;
    void primeNumbers(int n){
        isPrime.resize(n+1,1);
        for(int i=2;i<=n;i++){
            if(isPrime[i]){
                for(int j=2*i;j<=n;j+=i){isPrime[j]=0;}
            }
        }
        // for(int i=0;i<=n;i++)cout<<i<<" "<<isPrime[i]<<endl;
    }
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>>v;
        int left  = 2, right = n-2;
        primeNumbers(n);
        for(int i=2;i<=n/2;i++){
            if(isPrime[i] && isPrime[n-i])v.push_back({i,n-i});
        }
        return v;
    }
};
