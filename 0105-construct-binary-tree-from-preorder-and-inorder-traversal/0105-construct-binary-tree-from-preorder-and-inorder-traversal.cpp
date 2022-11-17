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
    
//     TreeNode* solve(vector<int>&inorder,vector<int>&preorder, unordered_map<int,int>&mp,int start,int end,int index){
//         if(start>end) return NULL;
        
//         TreeNode* root= new TreeNode(preorder[index++]);
//         int inindex=mp[root->val];
//         root->left = solve(inorder,preorder,mp,start,intindex-1,index);
//         root->right =solve(inorder,preorder,mp,intindex+1,end,index);
//         return root;
//     }
    
    
    

    TreeNode* buildbt(vector<int>& preorder, vector<int>& inorder, int is, int ie,unordered_map<int, int> &ump, int& preIndex) {
        if(is>ie) return NULL;
        TreeNode* root=new TreeNode(preorder[preIndex++]);
        int inindex=ump[root->val];
        root->left=buildbt(preorder,inorder,is,inindex-1,ump,preIndex);
        root->right=buildbt(preorder,inorder,inindex+1,ie,ump,preIndex);
        return root;

}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
        mp[inorder[i]]=i;
        }
        int index=0 ;//the index used for preorder movement 
         return buildbt(preorder,inorder,0,inorder.size()-1,mp,index);
    }
};