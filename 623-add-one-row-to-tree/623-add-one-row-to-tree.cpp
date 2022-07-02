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
    
    void solve(TreeNode* root, int val, int depth){
        if(depth<1 || root==NULL) return ;
        
        if(depth==1){
            TreeNode*ans=root;TreeNode*leftt=root->left;TreeNode*ryt=root->right;
          ans->left=new TreeNode(val);
        
            ans->left->left=leftt;
            
            ans=root;
             
            ans->right=new TreeNode(val);
            ans->right->right=ryt;
            
            
        }
        solve(root->left,val,depth-1);
        solve(root->right,val,depth-1);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
       if(depth==1){
           TreeNode*temp=new TreeNode(val);
           temp->left=root;
           return temp;
       }
        solve(root,val,depth-1);  //bcz root nni he toh toh root =1 tohh usse ek kam krke hi bhejenge
        return root;
    }
};

//simple sa vahi logic ki pehle check krlo depth 1 he yani sirf root he toh udr hi krlo agr aise ni he toh upr jao and base conditon pta hi he hme and fir jab tk dpeth 1 ni hoti minus krte jao jaise hi one hove udr chipka do and khtm kam