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
    void inOrder(TreeNode* root,TreeNode*&curr) {
        if (!root)
            return;
        inOrder(root->left,curr);
        curr->right=new TreeNode(root->val);
        curr=curr->right;
        inOrder(root->right,curr);
        
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* new_head;
        TreeNode* curr =new TreeNode();
        new_head=curr;
        inOrder(root,curr);
        return new_head->right;
    }
    

}; 
// void inorder(TreeNode*& ans, TreeNode* root) {
//         if (!root) return;
//         inorder(ans, root->left);
//         ans->right = new TreeNode(root->val);
//         ans = ans->right;
//         inorder(ans, root->right);
//     }
//     TreeNode* increasingBST(TreeNode* root) {
//         TreeNode* temp;
//         TreeNode* ans = new TreeNode();
//         temp = ans;
//         inorder(ans, root);
//         return temp->right;
//     }