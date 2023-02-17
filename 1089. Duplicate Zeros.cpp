class Solution {
public:
    void duplicateZeros(vector<int>& a) {
        int k=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==0){a.insert(a.begin()+i,0);i++;a.pop_back();}
        }
    }
};
