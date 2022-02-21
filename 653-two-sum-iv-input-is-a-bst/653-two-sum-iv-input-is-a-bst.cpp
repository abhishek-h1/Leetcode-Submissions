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
    vector<int>inorder;
    void inorderT(TreeNode *root)
    {
        if(!root)
            return;
        inorderT(root->left);
        inorder.push_back(root->val);
        inorderT(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        inorderT(root);
        map<int,int> m;
        
        for(int i=0;i<inorder.size();i++)
        {
            int diff=k-inorder[i];
            if(m.find(diff)!=m.end())
            {
                return true;
            }
            m[inorder[i]]=i;
        }
        return false;
    }
};