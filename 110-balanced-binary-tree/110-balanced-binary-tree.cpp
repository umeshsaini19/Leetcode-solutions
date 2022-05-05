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
    int solve(TreeNode* root){
        if(root==NULL) return 1;
        
        int lh=solve(root->left);
        if(lh==0) return 0;
        int rh=solve(root->right);
        if(rh==0) return 0;
        
        if(abs(lh-rh)>1) return 0;
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        return (solve(root));
    }
};