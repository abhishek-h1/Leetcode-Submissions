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
    vector<int>ans;
    
    void valid(TreeNode* root)
    {
        if(!root)
            return;
        valid(root->left);
        ans.push_back(root->val);
        valid(root->right);
    }
    bool isValidBST(TreeNode* root) {
        if(!root)
            return true;
        valid(root);
        
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i]>=ans[i+1])
                return false;
        }
      
        
        return true;
            
        
    }
};