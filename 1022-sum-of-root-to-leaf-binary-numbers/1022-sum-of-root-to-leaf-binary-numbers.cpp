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
    
    //pehla hi discuss me bda mst smjaya he
    int solve(TreeNode*root,int sum){
    if(root==NULL) return NULL;
    sum=2*sum+root->val;//yeh ek tarah se ulte arhe he hum upr se neche 100 arhe he toh 1 sbse pehle arha he toh aise likhna pdrha he 
        cout<<sum<<" ";
    if(!root->left and !root->right) return sum;
    
    return solve(root->left,sum) + solve(root->right,sum);
}
    int sumRootToLeaf(TreeNode* root) {
        int sum=0;
        return solve(root,sum);
    }
};
