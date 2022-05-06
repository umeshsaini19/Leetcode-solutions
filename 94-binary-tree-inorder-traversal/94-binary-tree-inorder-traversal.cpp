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
    
    //vector main fn me ans return krne ke lye without vector ho skta agr edr directly print krana hota 
    //That vector is not considered to be part of algorithmic space. It just stores the answer. Also, we can run the algorithm without it too. Think of it like this. What if instead of pushing element in vector, we just print that element. Then no space would be required
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>inorder;
        TreeNode*curr=root;
        while(curr){    
            if(curr->left==NULL) {
                inorder.push_back(curr->val);
                curr=curr->right;}
            
            else{TreeNode*prev=curr->left;
                while(prev->right && prev->right!=curr){
                    prev=prev->right;
                }
                 if(prev->right==NULL){
                     prev->right=curr;
                     curr=curr->left;
                 }
                 else{
                       prev->right=NULL;
                     inorder.push_back(curr->val);
                     curr=curr->right;
                 }
            }
        }return inorder;
    }
};