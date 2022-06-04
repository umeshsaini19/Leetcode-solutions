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
    
    //yeh vala morris pre order vala he same inorder he bs  jaise hi root ko connect kiya tbhi value daldi inorder me root ko jab todte he tb value dalttehe 
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int>inorder;
      //  TreeNode*curr=root; //aise new Node leke v kr skte he and purani se v kam chal skta he 
        if(root==NULL) return inorder;
        //pehle koi value ni dli he pehle sirf connection bna he dusri bari jab mudke vapis arhe he tb connection todenge bhi and sarri values add bhi re==krenge jai mata di lets boys rock
        while(root){
            if(root->left==NULL){
                inorder.push_back(root->val);
                root=root->right;
            }
            else{
               TreeNode*prev=root->left;
                while(prev->right && prev->right!=root){
                    prev=prev->right;
                }
                if(prev->right==NULL){
                    prev->right=root;
                       inorder.push_back(root->val);
                    root=root->left;
                }
                else{
                    prev->right=NULL;
                 
                    root=root->right;
                }
            }
        }
        return inorder;
    }
};