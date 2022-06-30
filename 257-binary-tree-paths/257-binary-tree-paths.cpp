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
    void solve(TreeNode*root,string s,vector<string>&v){
        if(root==NULL) return ;
        if(root->left || root->right ) s+=(to_string(root->val)+"->");
        else {
           s+= (to_string(root->val));
        
        v.push_back(s);}
        solve(root->left,s,v);
        solve(root->right,s,v);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
      
  vector<string>v;
        string s="";
        solve(root,s,v);
      return v;
    }
};  

 // void helper(TreeNode* root,vector<string>& answer,string curr){
 //        if(!root)return;
 //        if(root->left||root->right)curr+=(to_string(root->val)+"->");
 //        else{
 //            curr+=(to_string(root->val));
 //            answer.push_back(curr);
 //        }
 //        helper(root->left,answer,curr);
 //        helper(root->right,answer,curr);  
 //    }
 //    vector<string> binaryTreePaths(TreeNode* root) {
 //        vector<string> answer;
 //        string curr="";
 //        helper(root,answer,curr);
 //        return answer;
 //    }