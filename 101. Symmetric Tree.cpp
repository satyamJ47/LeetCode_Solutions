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
private:
    void inorderleft(TreeNode* root,vector<int>&l)
    {
        if(root==nullptr){l.push_back(-1);return;}
        l.push_back(root->val);
        inorderleft(root->left,l);
        inorderleft(root->right,l);
    }
    void inorderright(TreeNode* root,vector<int>&r)
    {
        if(root==nullptr){r.push_back(-1);return;}
        r.push_back(root->val);
        inorderright(root->right,r);
        inorderright(root->left,r);
    }
public:
    bool isSymmetric(TreeNode* root) {
        vector<int>l,r;
        inorderleft(root->left,l);
        inorderright(root->right,r);
        // for(auto i:l)cout<<i<<" ";cout<<endl;
        // for(auto i:r)cout<<i<<" ";cout<<endl;
        if(l==r)return true;
        return false;
    }
};
