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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
            return NULL;
        if(!root->left and !root->right and targetSum == root->val)
        {
          //  temp.push_back(root->val);
           // ans.push_back(temp);
            return true ;
        }
       // temp.push_back(root->val);
    return    hasPathSum(root->left,targetSum-root->val)||hasPathSum(root->right,targetSum-root->val);
    }
    
};