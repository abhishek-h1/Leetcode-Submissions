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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root)
            return res;
        vector<int> v;
        queue<TreeNode*>q;
        
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            auto x=q.front();
            
            q.pop();
            if(x==NULL)
            {
                res.push_back(v);
                v.clear();
                if(q.empty())
                    return res;
                q.push(NULL);
                continue;
            }
            
            v.push_back(x->val);
            if(x->left)
                q.push(x->left);
            if(x->right)
                q.push(x->right);
        }
        
        return res;
        
    }
};