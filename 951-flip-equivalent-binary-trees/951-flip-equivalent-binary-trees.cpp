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
    
    //simple sams tree vala question he pehle check krlo root is matching or not fer root1 ->left and root->2 left annd root1->right and root2>right  or root1->left and root->2right and root->1 right and root->2 left aise mirror image possible he agr yes to okk elese false
    
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL and root2==NULL) return true;
        if(root1==NULL|| root2==NULL || root1->val!=root2->val) return false;
        
        return flipEquiv(root1->left ,root2-> left) and flipEquiv(root1->right,root2->right)|| flipEquiv(root1->left,root2->right) and flipEquiv(root1->right,root2->left);
    }
};