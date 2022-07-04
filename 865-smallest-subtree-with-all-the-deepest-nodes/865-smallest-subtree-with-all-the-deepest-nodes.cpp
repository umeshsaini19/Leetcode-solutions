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
    //smallest subtree vahi hoga jo deepest node bhi rkhta ho with left and right height equal hum sbse pehle root 3 pe khade hmne left height nikali hmne right height niakli toh jada height ai left toh hum eft me gye ab left me hum vahan tk ayenge jahan pe jake left and right equal a jayenge jaise left bda mila toh left me he jaise right mila toh right me he par return vahi hoga jahan pe height brabr hogi dono ki  agr root pe hi height brabr milti toh root se hi anse ki shururvat ho jait
    int depth(TreeNode*root){
        if(root==NULL) return 0;
        return 1+max(depth(root->left),depth(root->right));
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        if(root==NULL) return NULL;
        
        int leftDepth=depth(root->left);
        int rightDepth=depth(root->right);
        if(leftDepth==rightDepth) return root;
        else{
        if(leftDepth>rightDepth){
            return  subtreeWithAllDeepest(root->left);
        }
        return  subtreeWithAllDeepest(root->right);
    }
    }
};