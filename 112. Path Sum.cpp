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
    bool solve(TreeNode* root, int targetSum)
    {
        if(root == nullptr)return false;
        if(root->left == nullptr && root->right == nullptr && targetSum == root->val)return true;

        if(solve(root->left,targetSum-root->val)==true)return true;
        if(solve(root->right,targetSum-root->val)==true)return true;
        
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return solve(root,targetSum);
    }
};
