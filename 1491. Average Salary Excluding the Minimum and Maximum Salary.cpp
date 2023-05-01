class Solution {
public:
    double average(vector<int>& salary) {
        int sum = 0;
        int mini,maxi; 
        mini = maxi = salary[0]; 
        for(auto i:salary){
            sum+=i;
            mini = min(mini,i);
            maxi = max(maxi,i);
        }
        return (double)(sum-mini-maxi)/(salary.size()-2);
    }
};
