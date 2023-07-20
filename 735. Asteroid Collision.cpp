class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>st;
        int n = asteroids.size();
        for(int i=0;i<n;i++)
        {
            if(asteroids[i]<0)
            {
                while(st.size() && st.back()>0 && st.back()<abs(asteroids[i])) {st.pop_back();}
                if(st.size() && abs(asteroids[i]) == st.back())
                {
                    st.pop_back();
                }
                else{
                    if(st.size()==0 || st.back()<0)st.push_back(asteroids[i]);
                } 
                
            }
            else{
                st.push_back(asteroids[i]);
            }
        }
        // vector<int>v(st.size());
        // for(int i=st.size()-1;i>=0;i--)
        // {
        //     v[i] = st.top();
        //     st.pop();
        // }
        return st;
    }
};
