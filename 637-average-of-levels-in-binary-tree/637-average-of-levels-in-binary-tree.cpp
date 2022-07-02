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
    vector<double> averageOfLevels(TreeNode* root) {
  
        vector<double>ans;
        
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            double size=q.size();
       //     cout<<size<<" ";
             
           double row=0.0;
            for(int i=0;i<size;i++){
               TreeNode*temp=q.front();
                row+=temp->val;
              cout<<row<<" ";
                q.pop();
            
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            }
            ans.push_back(row/size);
        }return ans;
    }
};