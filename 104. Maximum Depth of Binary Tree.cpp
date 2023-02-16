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
int traverse(TreeNode* p){
    if(p==nullptr)return 0;
    int l = 1 + traverse(p->left);
    int r = 1 + traverse(p->right);
    return max(l,r);
}
public:
    int maxDepth(TreeNode* root) {
        return traverse(root);
    }
};
