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
    int c=0;
    void solve(int  mx,TreeNode* root){
        if(root==NULL) return ;
        
        if(root->val>=mx){
            c++;
            mx=root->val;
        }
        solve(mx,root->left);
        solve(mx,root->right);
    }
    int goodNodes(TreeNode* root) {
        int mx=INT_MIN;
      
        solve(mx,root);
        return c;
    }
};