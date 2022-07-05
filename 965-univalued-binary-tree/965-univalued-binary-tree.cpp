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
bool inorder(int rd,TreeNode* root){
    if(root==nullptr)
            return true;
    if(root->val!=rd )return false;
    return inorder(rd,root->left ) and inorder(rd,root->right);
}
    bool isUnivalTree(TreeNode* root) {
        int rootdata=root->val;
       return  inorder(rootdata,root);
       
    }
};

//   bool isUnivalTree(TreeNode* root) {
//         return f(root,root->val);
//     }
//     bool f(TreeNode* root,int val){
//         if(root==NULL)return true;
//         return (f(root->left,val) & f(root->right,val)  & (root->val==val));
//     }