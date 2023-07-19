class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        // for(auto i:intervals)cout<<i[0]<<" "<<i[1]<<endl;
        int n = intervals.size();
        int cnt = 0;
        int prev = intervals[0][1];
        for(int i=1;i<n;i++)
        {
            if(prev<=intervals[i][0]){
                prev = intervals[i][1];
            }
            else{
                prev = min(prev,intervals[i][1]);
                cnt++;
            }
        }
        return cnt;
    }
};
