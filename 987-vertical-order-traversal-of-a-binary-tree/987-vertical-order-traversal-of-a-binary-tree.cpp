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
    
    
    //second  
//      map<int,map<int,multiset<int>>> m;
//     void solve(TreeNode* root,int col,int row)
//     {
//         if(!root)return;
//         m[col][row].insert(root->val);
//         solve(root->left,col-1,row+1);
//         solve(root->right,col+1,row+1);
//     }
// public:
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         vector<vector<int>> v;
//         solve(root,0,0);
//         for(auto m1:m)
//         {
//             v.push_back(vector<int>());
//             for(auto m2:m1.second)
//             {
//                 for(auto m3:m2.second)
//                 {
//                     v.back().push_back(m3);
//                 }
//             }
//         }
//         return v;    
        
//     }
     map<int, map<int, multiset<int>>>nodes;
    void dfs(TreeNode* root, int x , int y){
        if(root==NULL) return;
        nodes[x][y].insert(root->val);
        dfs(root->left, x-1, y+1);
        dfs(root->right, x+1, y+1);
    }
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root, 0, 0);
        vector<vector<int>>ans;
        for(auto p1:nodes){
            
            vector<int>temp;
            for(auto p2:p1.second){
              
            
                temp.insert(temp.end(), p2.second.begin(), p2.second.end());//temp.end la mtlb last me lgayiye value p2 vali shuru se end tak //kyuki hmare ans me sbse last me valye he jo sbsew pehle chaye hme example dekhke smj a jayega and que mjedar he sexy he jitni mrji bar krlo gand ftegi hi es que me 
            }
         
         for(int i=0;i<temp.size();i++){
             cout<<temp[i]<<" ";
         }
            ans.push_back(temp);
        }
        return ans;
    }
    
    
};