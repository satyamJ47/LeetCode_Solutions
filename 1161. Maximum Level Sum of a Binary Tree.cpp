/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // vector<int>mat;
    unordered_map<int,int>ump;

    void traverse(int level,TreeNode* root)
    {
        if(root == nullptr)
        {
            return;
        }
        ump[level]+=root->val;
        traverse(level+1,root->left);
        traverse(level+1,root->right);
    }

    int maxLevelSum(TreeNode* root) {
        traverse(0,root);
        int level;
        int maxi = INT_MIN;
    
        for(auto i:ump){
            // cout<<i.first<<" "<<i.second<<endl;
            if(maxi<i.second)
            {
                level = i.first;
                maxi = i.second;
            }
            else if(maxi == i.second && i.first<level)
            {
                level = i.first;
            }
        }
        return level+1;
    }
};
