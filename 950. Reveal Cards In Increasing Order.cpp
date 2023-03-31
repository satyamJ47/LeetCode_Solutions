class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.rbegin(),deck.rend());

        deque<int>dq;
        dq.push_front(deck[0]);
        for(int i=1;i<deck.size();i++)
        {
            int last = dq.back();
            dq.pop_back();
            dq.push_front(last);
            dq.push_front(deck[i]);
        }
        vector<int>res(dq.begin(),dq.end());
        return res;
    }
};
