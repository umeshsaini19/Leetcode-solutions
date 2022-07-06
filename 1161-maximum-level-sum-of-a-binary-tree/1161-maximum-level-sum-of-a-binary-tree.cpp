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
    int maxLevelSum(TreeNode* root) {
         int max_sum=INT_MIN;
        int level=0;
        queue<TreeNode*>q;
        q.push(root);
       
        int resultlevel=0;
        while(!q.empty()){
            int len=q.size();
            int sum=0;
           for(int i=0;i<len;i++){
               TreeNode*temp=q.front();
              sum+=temp->val;
             //  sum=temp->val+sum;
                q.pop();
               if(temp->left) q.push(temp->left);
               if(temp->right) q.push(temp->right);
              
           }
            level++;
            cout<<level;
          
            if(sum>max_sum){
                max_sum=sum;
                resultlevel=level;
            }
        }
        return resultlevel;
    }
};

// int maxLevelSum(TreeNode* root)
// {
// int max_sum = INT_MIN;
// int result_level = 0;
//   int level=0;
//   queue<TreeNode* > qu;
//   qu.push(root);
  
//   while(!qu.empty())
//   {
    
//     int sum =0;
//     int len = qu.size();
    
//     for(int i=0; i<len; i++)
//     {
//       TreeNode* curr = qu.front();
//       qu.pop();
      
//       sum = sum + curr->val; 
      
//       if(curr->left) qu.push(curr->left);
//       if(curr->right) qu.push(curr->right);

//     }
    
//     level++;
//    // cout<<sum <<" "<<level<<endl;
//    // res.push_back(std::make_pair(sum , level));
    
//     if(sum > max_sum)
//       {
//         max_sum = sum;
//         result_level = level;
//       }
    
//   }
//   return result_level;