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
   TreeNode* buildBinaryTree(vector<int>& preorder, vector<int>& inorder, int is, int ie, unordered_map<int, int> &ump, int& preIndex) {
    if(is > ie) return NULL;
    TreeNode *root = new TreeNode(preorder[preIndex++]);
    
    // get the index of the val;
    int inIndex = ump[root->val];
    
    root->left = buildBinaryTree(preorder, inorder, is, inIndex-1, ump, preIndex);
    root->right = buildBinaryTree(preorder, inorder, inIndex+1, ie, ump, preIndex);
    return root;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int preIndex = 0;
	unordered_map<int, int> ump;    
    for(int itr = 0; itr < inorder.size(); itr++){
        ump[inorder[itr]] = itr;
    }
    return buildBinaryTree(preorder, inorder, 0, inorder.size()-1, ump, preIndex);
}
};