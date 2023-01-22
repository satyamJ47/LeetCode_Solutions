class Solution {
public:
    
    struct Local {
        Local(int k) { this-> k = k; }
        bool operator () (vector<int>v1,vector<int>v2) {return v1[k]>v2[k];}
        int k;
    };

    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        sort(score.begin(),score.end(),Local(k));
        return score;
    }
};