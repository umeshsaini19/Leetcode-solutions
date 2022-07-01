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
 */class Solution {
public:
    //here we are doing the inorder traversal because that will result the elements into sorted order
    //this inorder traversal resulting into sorted order is only possible when the tree is bst
    void func(TreeNode * root, vector<int>&v){
        if(root == NULL){
            return;
        }
        func(root->left, v);
        v.push_back(root->val);
        func(root->right, v);
    }
    
    int getMinimumDifference(TreeNode* root) {
	//the reason here that we are using the inorder traversal that we want consicutive elements next to each other so that the abs will be as less as possible
        vector<int>v;
        func(root,v);
        int ans = INT_MAX;
        //finding the minimum abs difference between different nodes values of the tree
        for(int i = 0; i<v.size()-1; i++){
            if(abs(v[i]-v[i+1])<ans){
                ans = abs(v[i]-v[i+1]);
            }
        }
        
        return ans;
    }
};



// Here we are just maintaining the previous element, as the elements are traversed in sorted order so subtracting the current element with the previous visited element will give us our potential answer and minimum of all those potential answers will give us final result.

// This is the same thing we are doing in the array solution just in this we are maintaining the previous element instead of the whole array


// class Solution {
// public:
//     void solve(TreeNode* root,int &ans,int &prev){
//         if(root==NULL) return ;
//         solve(root->left,ans,prev);
//         if(prev!=INT_MAX)
//         {            ans=min(ans,abs(prev-root->val));
//         }
//                     prev=root->val;
//                     solve(root->right,ans,prev);
                    
//     }
//     int getMinimumDifference(TreeNode* root) {
//        int ans=INT_MAX;
//         int prev=INT_MAX;
//         solve(root,ans,prev);
//         return ans;
        
//     }
// };