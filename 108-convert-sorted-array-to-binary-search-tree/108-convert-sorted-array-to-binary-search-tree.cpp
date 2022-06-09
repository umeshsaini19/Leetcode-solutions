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
    
    //binary search vala logic he ki jo jo element mid se chote he vh sarre left me jayenge and jo jo bde he voh right ame  and jo mid he voh root bn jayega 
    TreeNode*helper(vector<int>&nums,int low,int high){
    while(low<=high){
        int mid=low+(high-low)/2;
        TreeNode*root=new TreeNode(nums[mid]);
       
        root->left=helper(nums,low,mid-1);
        root->right=helper(nums,mid+1,high);
         return root;
    }return nullptr;
   }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
      return helper(nums,0,nums.size()-1);
    }
};