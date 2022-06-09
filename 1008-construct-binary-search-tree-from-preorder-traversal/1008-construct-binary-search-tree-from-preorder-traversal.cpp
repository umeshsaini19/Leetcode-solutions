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
    int i=0;
    TreeNode* solve(vector<int>&pr,int bound){
        
   //i bhi & me ayega tbhi chlega
        if(i==pr.size()||pr[i]>bound) return NULL;
        TreeNode*root=new TreeNode(pr[i++]);
        root->left=solve(pr,root->val);
        root->right=solve(pr,bound);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
       // int i=0;
        return solve(preorder,INT_MAX);
    }
};