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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
      if(root==NULL) return NULL;
        
        root->left=removeLeafNodes(root->left,target);
            root->right=removeLeafNodes(root->right,target);
            if(root->val==target and root->left==NULL and root->right==NULL) return NULL;
        
        return root;
    }
};

//vasse toh simple code he like root ke left right pe values add hoti rhegi and jaise pe leaf pe punch gye and pta lga ki yehi dlt krni he toh usko simply null krdo 