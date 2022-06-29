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
    TreeNode *solve(vector<int>& nums,int start,int end){
        if(start>end) return NULL;
        int val=-1;
        int index=-1;
        for(int i=start;i<=end;i++){
            if(nums[i]>val)
            {
                val=nums[i];
                index=i;
            }
        }
        TreeNode*ans=new TreeNode(val);  
        ans->left=solve(nums,start,index-1);  //ab jo exact index he voh root bngya he eslee index-1 for left and index+1 for right
        ans->right=solve(nums,index+1,end);
        return ans;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
    return solve(nums,0,nums.size()-1);
    }
};

//simply jaise hmne sbse pehle sbsa max element dund lia usko bnaya hmara raja yani root fir array me jjo uske lleft pe he usko left ke liye call krdia and jo uske right pe he usko right and same process 