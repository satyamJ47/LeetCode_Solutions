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
    int traverse(TreeNode* node)
    {
        // if(node->left==nullptr && node->right == nullptr)return 0;
        if(node == nullptr)return 1e7;
        if(node->left==nullptr && node->right == nullptr)return 1;
        int l = traverse(node->left);
        int r = traverse(node->right);
        return 1 + min(l,r);
    }
     
    int minDepth(TreeNode* root) {
        int res =  traverse(root);
        return res == 1e7 ? 0 : res;
    }
};
