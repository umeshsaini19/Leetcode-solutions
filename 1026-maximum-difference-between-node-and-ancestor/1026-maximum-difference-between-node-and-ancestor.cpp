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
    
    //pehla link he bdia smjaya he pr me khud ko khud smjata hu dekh bhai kuch aise he ki ancestor hota he upper level aur kuch ni toh ab hme agr max diff dekhna he toh hme ek max value pure left me se and ek min value pure left me se chaiye same for right bs vph dono find kro and jaise hi NULL pe punch gye subtract krke return ;
    int maxAncestorDiff(TreeNode* root,int mini=INT_MAX,int maxi=INT_MIN) {
        if(root==NULL) return (maxi-mini);
        
         mini=min(mini,root->val);
         maxi=max(maxi,root->val);
        return max(maxAncestorDiff(root->left,mini,maxi),maxAncestorDiff(root->right,mini,maxi));
    }
};
