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
    bool solve(TreeNode* root,long min_val,long  max_val){
              if(root==NULL) return true;
        if(root->val>=max_val|| root->val<=min_val) return false;
      
        return (solve(root->left,min_val,root->val) and solve(root->right,root->val,max_val));  //jab left me jarhe he toh root valai value max hogi usse max na ho koi and jab right me jarhe toh root min value he usse chota na ho koi agr dono condition set toh apna ans v set
    }
    bool isValidBST(TreeNode* root) {
        return solve(root,LONG_MIN,LONG_MAX);
        
    }
};
// bool solve(TreeNode*root,long minval,long  maxval){
//         if(root==NULL) return true;
//         if(root->val>=maxval|| root->val<=minval) return false;
//         return solve(root->left,minval,root->val) and solve(root->right,root->val,maxval);
//     }
//     bool isValidBST(TreeNode* root) {
//         return solve(root, LONG_MIN , LONG_MAX);   }
// };