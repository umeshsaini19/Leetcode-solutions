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
//     bool solve(TreeNode*p,TreeNode*q){
//         if(p==NULL and q==NULL) return true;
//         if(p==NULL|| q==NULL) return false;
//        // if(p->val!=q->val) return false;
//         else if return solve(p->left,q->right ) and solve(p->right,q->left);
//         else return false;
        
//     }
//     bool isSymmetric(TreeNode* root) {
//         if(root==NULL) return true;
//         return solve(root->left,root->right);
        
    bool isMirror(TreeNode* root1,TreeNode *root2){
        if(root1==NULL && root2==NULL)
            return true;
        if(root1 && root2 && root1->val == root2->val)
            return isMirror(root1->left,root2->right) && isMirror(root1->right,root2->left);
        
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return isMirror(root,root);
    
    }
};