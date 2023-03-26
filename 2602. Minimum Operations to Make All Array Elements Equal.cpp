class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        long long sum = 0;
        sort(nums.begin(),nums.end());
        // sort(queries.begin(),queries.end());
        vector<long long>pref;
        int qsize = queries.size();
        int nsize = nums.size();
        // 2 
        vector<vector<long long>>mp;
        for(int i=0;i<qsize;i++)
        {
            mp.push_back({queries[i],i,nsize});
        }
        sort(mp.begin(),mp.end());
        // vector<pair<long long,int>>mp(qsize,std::make_pair(-1,nsize));
        // unordered_map<long long,int>ump;
        int q=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            pref.push_back(sum);
            while(q<qsize && nums[i]> mp[q][0])
            {
                // ump[queries[k]]=i;
                // mp.push_back(make_pair(queries[q],i));
                // mp[q].first = queries[q];
                // mp[q].second = i;
                // 3
                // mp[q][0] = queries[q];
                // mp[q][1] = queries[q];
                // cout<<
                mp[q][2] = i;
                q++;
            }
        }
        // while(q<qsize){mp[q].first = queries[q];q++;}
        // for(auto i:mp)
        // {
        //     cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
        // }
        
        vector<long long>res(qsize,-1);
        // cout<<"\nleft | right \n";
        for(auto i:mp)
        {
            long long qval = i[0];
            int indx = i[2];
            long long left = 0,right = abs(sum-(qval*nsize)); 
            if(indx>0)
            {
                left = abs(pref[indx-1] - (indx)*qval);
            }
            if(indx>0)
            {
                right = abs((sum - pref[indx-1]) - ((nsize - indx)*qval));
            }
            // cout<<left<<"  |  "<<right<<endl;
            // res.push_back(left+right);
            // 1
            res[i[1]] = left+right;
        }
        return res;
    }
};
