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
    int solve(TreeNode* root,int n,int sum)
    {
        if(root==nullptr)return 0;
        if(root->left == nullptr && root->right == nullptr){return sum+=((n*10)+root->val);}
        // cout<<n<<endl;
        int l = solve(root->left,n*10+(root->val),sum);
        int r = solve(root->right,n*10+(root->val),sum);

        return l+r;

    }
    int sumNumbers(TreeNode* root) {
        return solve(root,0,0);
    }
};
