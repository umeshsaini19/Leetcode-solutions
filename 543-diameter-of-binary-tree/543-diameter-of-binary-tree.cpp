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
     int Solve(TreeNode* root,int &diameter) {
        if (root == NULL)
            return 0;

        int l = Solve(root->left,diameter);
        int r = Solve(root->right,diameter);

       
      diameter = max(diameter,l+r);
        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
       

        int diameter=0;
        Solve(root,diameter);
        return diameter;
    }
};