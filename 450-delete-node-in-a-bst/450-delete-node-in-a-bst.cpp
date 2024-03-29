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
    //yeh sol second vale trike se kiya he jo notes me he usme 
    TreeNode* deleteNode(TreeNode* root, int key) {
          if(!root) return root;
        if(root->val == key){
            if(root->right){
                TreeNode* left = root->left;
                root = root->right;
                TreeNode* temp = root;
                while(temp->left) temp = temp->left;
                temp->left = left;
            } 
            else root = root->left; //yeh else bhi root pe hi hoga tbhi chlega 
        }
        else if(root->val > key){
            root->left = deleteNode(root->left, key);  //logic bda sexy he krle bhai
            
        }
        else{
            root->right = deleteNode(root->right, key);
        }
        return root;
    
    }
};