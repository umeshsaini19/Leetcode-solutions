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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         if(root==NULL)
               return {};
           vector<vector<int>> ans; 
            queue<TreeNode*> q;
            q.push(root);
            TreeNode *temp;
            int len;
            while(!q.empty()){
               len=q.size();
		       vector<int> v;
               for(int i=0;i<len;i++){
                    temp=q.front();
                    q.pop();
                    v.push_back(temp->val);
                  // cout<<v[i]<<" ";

                   if(temp->left) q.push(temp->left);
                   if(temp->right) q.push(temp->right);
                }
		         ans.insert(ans.begin(),v);  //hum totally is que ko 2 trike se kr skte mere acc first toh normal level order traversal kiya then  ans find krke usko reverse krdia and game khtm second one is yeh ans.insert vala yeh hmesha jo new v ayega usko front me hi dalega toh sbse pehle dla voh peche chala kayega aise krte krte
            }
      ///  vector<vector<int>>ans1;
      
 //  reverse(ans.begin(),ans.end());
        return ans;
    }
};