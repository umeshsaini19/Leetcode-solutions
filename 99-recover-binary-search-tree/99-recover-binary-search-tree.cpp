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
    
TreeNode* firstMistake, *secondMistake, *pre;
	void recoverTree(TreeNode* root) {
		pre = new TreeNode(INT_MIN);
		inorder(root);
		swap(firstMistake->val, secondMistake->val);
	}

	void inorder(TreeNode* root) {
		if(root == nullptr) 
			return;

		inorder(root->left);

		if(firstMistake == nullptr && root->val < pre->val)   //is line ka mtlb he ki yeh first violation he 
			firstMistake = pre;
		if(firstMistake != nullptr && root->val < pre->val)  //isa mtkb yeh second he 
			secondMistake = root; 
		pre = root;
        cout<<pre->val;

		inorder(root->right);
	}
};
//main idea vahi he ki tree ka inorder krlia use sort krlia fer dubara se tree traverse kr rhe inorder se and hme pta he jahan pr vecotr ke andr ki value sahi ni hogi us value se swap krna pdega and ans a jayega