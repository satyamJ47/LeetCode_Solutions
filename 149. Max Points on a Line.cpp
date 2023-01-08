class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        if(n==1)return 1;

        int maxcnt=0;
        for(int i=0;i<n;i++)
        {
            unordered_map<double,int>cnt;
            double slope;
            for(int j=i+1;j<n;j++)
            {
                if(points[j][0]==points[i][0])slope=DBL_MAX;
                else slope=(double)(points[j][1]-points[i][1])/(points[j][0]-points[i][0]);
                cnt[slope]++;
            }
            
            for(auto [slp,count]:cnt)
            {
                maxcnt=max(count,maxcnt);
            }
        }
        return maxcnt+1;
    }
};