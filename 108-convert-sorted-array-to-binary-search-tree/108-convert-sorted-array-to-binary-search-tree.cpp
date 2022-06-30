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
   TreeNode* rec(vector<int>& nums, int start, int end) {
        if (start >= end) return NULL;
        int mid = (start + end) / 2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = rec(nums, start, mid);
        node->right = rec(nums, mid+1, end);
        return node;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return rec(nums, 0, nums.size());
    }
};