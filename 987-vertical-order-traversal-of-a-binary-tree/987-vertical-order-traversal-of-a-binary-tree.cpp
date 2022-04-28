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

     
//     map<int,multiset<pair<int,int>>>ans;
        
//     void pre( TreeNode *root, int horizontal_Level, int vertical_Level ){
//         if(!root)
//             return ;
//         ans[horizontal_Level].insert({vertical_Level,root->val});
//         pre(root->left,horizontal_Level-1,vertical_Level+1);
//         pre(root->right,horizontal_Level+1,vertical_Level+1);
//     }
// public:
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         pre(root,0,0);
//         // pre(root,0 , 0 );
//         vector<vector<int>>v;
//         for(auto x:ans){
//             vector<int>c;
//             for(auto i:x.second){
//                 c.push_back(i.second);
//             }
//             v.push_back(c);

//         return v;
     map<int,map<int,multiset<int>>> m;
    void solve(TreeNode* root,int col,int row)
    {
        if(!root)return;
        m[col][row].insert(root->val);
        solve(root->left,col-1,row+1);
        solve(root->right,col+1,row+1);
    }
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> v;
        solve(root,0,0);
        for(auto m1:m)
        {
            v.push_back(vector<int>());
            for(auto m2:m1.second)
            {
                for(auto m3:m2.second)
                {
                    v.back().push_back(m3);
                }
            }
        }
        return v;    
        
    }
    
    
};