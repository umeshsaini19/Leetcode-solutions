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
    void solve(TreeNode* root,int &ans,int &prev){
        if(root==NULL) return ;
        solve(root->left,ans,prev);
        if(prev!=INT_MAX)
        {            ans=min(ans,abs(prev-root->val));
        }
                    prev=root->val;
                    solve(root->right,ans,prev);
                    
    }
    int getMinimumDifference(TreeNode* root) {
       int ans=INT_MAX;
        int prev=INT_MAX;
        solve(root,ans,prev);
        return ans;
        
    }
};