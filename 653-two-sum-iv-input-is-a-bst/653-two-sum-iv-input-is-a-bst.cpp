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
    vector<int>v;
    void solve(TreeNode*root){
        if(root==NULL) return;
        solve(root->left);
        v.push_back(root->val);
        solve(root->right);
        
        
    }
    bool findTarget(TreeNode* root, int k) {
        
        solve(root);
        int l=0;
        int r=v.size()-1;
     //   if(v.size()<=1) return false;
        while(l<r){
           if(v[l]+v[r]==k) return true;
           else if(v[l]+v[r]<k) l++;
            else r--;
        }return false;
    }
};