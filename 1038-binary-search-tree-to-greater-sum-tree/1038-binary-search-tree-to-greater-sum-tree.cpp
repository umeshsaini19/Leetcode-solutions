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
    
    //que yeh ki jispe bhi root he usse bdi +voh khud jitni vlauue he sabhi ka sum uski key hogi toh simple pehle right pe jao and sbse right vala sbse bda hoga toh uski value+0 hoga fir just usse upr vala root+val+jo eche tha uski value adnd left badh  me hoga means ki rever inorder traversal hoga 
    void solve(TreeNode*root,int &till_sum){
        if(root==NULL) return ;
        solve(root->right,till_sum);
        till_sum+=root->val;
       root->val=till_sum;
       // till_sum=root->val;
    
        solve(root->left,till_sum);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int till_sum=0;
        solve(root,till_sum);
        return root;
        
    }
};

// void rev(TreeNode* root, int& cnt){
//         if(!root) return ;
//         rev(root->right, cnt);
// 		// The root value is continously updated with the help of cnt.
//         root->val += cnt;
// 		// And the count variable is changed so, that the next node in the traversal will be updated.
//         cnt = root->val;
//         rev(root->left, cnt);
//     }
//     TreeNode* bstToGst(TreeNode* root) {
// 		// this consists of the answer for each node.
// 		int cnt = 0;
//         rev(root, cnt);
//         return root;