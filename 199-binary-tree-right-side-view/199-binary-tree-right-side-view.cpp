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
    void solve(TreeNode*root,int level,vector<int>&res){
        if(root==NULL) return ;
        
        if(level==res.size()) res.push_back(root->val);   //left ke liye kam ni krega bcz vector ka size pehle hi 3 ho chuka he 
        //so if condtition work ni kregi
        solve(root->right,level+1,res);
        solve(root->left,level+1,res);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        solve(root,0,res);
        return res;
        
    }
};