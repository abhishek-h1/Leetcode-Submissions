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
    bool mirror(TreeNode*l,TreeNode*r){
        if(!l && !r)
            return true;
        if(l && r && l->val==r->val)
            return mirror(l->left,r->right) && mirror(l->right,r->left);
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return mirror(root,root);
    }
};