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
    int ans;
    void inorder(TreeNode*root,int &k){
        if(!root) return  ;
        inorder(root->left,k);
        if(--k==0){ ans=root->val;
        return ;}
        inorder(root->right,k);
    }
    
    //isko morris traversal se aur bhi achee se kr skte he par mereko yad ni he jab revision kruga tb dubra dekhenge
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
       return ans;
    }
};