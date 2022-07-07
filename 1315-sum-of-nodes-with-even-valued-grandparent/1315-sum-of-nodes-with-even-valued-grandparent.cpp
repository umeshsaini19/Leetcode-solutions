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
    int sumEvenGrandparent(TreeNode* root) {
        int sum =0;
        if(root==NULL) return 0;
        
        if(root->val%2==0){
            if(root->left!=NULL and root->left->left!=NULL)
                sum+=root->left->left->val;
            if(root->left!=NULL and root->left->right!=NULL)
                sum+=root->left->right->val;
            if(root->right!=NULL and root->right->right!=NULL)
                sum+=root->right->right->val;
            if(root->right!=NULL and root->right->left!=NULL)
                sum+=root->right->left->val;
        }
        sum+=sumEvenGrandparent(root->left);
          sum+=sumEvenGrandparent(root->right);
        return sum;
    }
};

// dfs lgao koi v and neche jate jate even ate hi uske child ka left lki val and childe ke right ki value sum me le leneg e and neche jate jayenge 