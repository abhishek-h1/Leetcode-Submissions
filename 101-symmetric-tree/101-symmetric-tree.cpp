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
    
    bool check(TreeNode* n1, TreeNode* n2)
    {
        if(n1 and n2)
        {
            return n1->val==n2->val and check(n1->left, n2->right) and check(n1->right,n2->left);
            
        }
        
        return n1==n2;
    }
    bool isSymmetric(TreeNode* root) {
       return check(root->left , root->right);
    }
};