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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
       vector<vector<int>>result;
if(root==NULL) return result;
        queue<TreeNode*>q;
        q.push(root);
         bool lefttoright=true;
       
        while(!q.empty()){
              int size=q.size();
            vector<int>v(size);// kyuki hmne neche index me value dalni he toh hme size dena pdega edr ich hi
           
             for (int i = 0; i < size; i++) {
      TreeNode * node = q.front();
      q.pop();

      // find position to fill node's value
      int index = (lefttoright) ? i : (size - 1 - i);

      v[index] = node -> val;
      if (node -> left) {
       q.push(node -> left);
      }
      if (node -> right) {
        q.push(node -> right);
      }
    }
    // after this level
    lefttoright = !lefttoright;
    result.push_back(v);
  }
  return result;
}
    
};