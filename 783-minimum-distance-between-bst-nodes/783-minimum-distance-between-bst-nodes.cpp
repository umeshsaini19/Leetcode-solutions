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
    void dfs(TreeNode*&root,int &ans,TreeNode*&prev){
        if(root==NULL) return ;
        dfs(root->left,ans,prev);
        if(prev!=NULL) ans =min(ans,root->val-prev->val);
        //cout<<ans<<" ";
        prev=root;
        dfs(root->right,ans,prev);
        
    }
    int minDiffInBST(TreeNode* root) {
        int ans=INT_MAX;
        TreeNode*prev=NULL;
        dfs(root,ans,prev);
        
        return ans;
    }
};

//INORDER KRLO AND SUBTRACT KRTE CHALO AFTER PUTTINH IN VECTOR AND MIN RETURN KRDO PAR I DONT THINK IT IS OPTIMAL 
//SECOND ONE IS HME SIRF PREVIOUS CHAIYE AND JO NEXT ELEMENT HE USKO PREV SE SUBTRACT KRLO AND ANS A JANA USING INORDER 
 