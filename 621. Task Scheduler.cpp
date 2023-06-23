class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<int,int>freq;
        for(auto i:tasks)freq[i]++;
        priority_queue<int>pq;
        queue<pair<int,int>>q;
        int time = 0;
        for(auto i:freq)pq.push(i.second);
        // while(!pq.empty()){cout<<pq.top()<<endl;pq.pop();}
        while(!pq.empty() || !q.empty())
        {
            if(!q.empty() && q.front().second==time){
                // cout<<q.front().first<<" "<<q.front().second<<endl;
                pq.push(q.front().first);
                q.pop();
            }
            int task = 0;
            if(!pq.empty()){
                task = pq.top() - 1;
                pq.pop();
            }
            time++;
            if(task>0)
            q.push({task,time+n});
        }
        return time;
    }
};
