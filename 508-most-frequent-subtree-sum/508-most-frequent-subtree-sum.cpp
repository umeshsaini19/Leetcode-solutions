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
    
    // most frequent ka matlab he ki jo sbse jada bari arha he mitr jaise first ke 2 ,-3 ,5-3+2 =4 , sabhi 1 bari aye toh sabko ek time and dusre me 2,-5,5-5+2=2 2 bari agya toh ans 2 agya ki uska cout jada  he 
    
    unordered_map<int,int>mp;
    
    int sumofroot(TreeNode*root){
        return root?root->val+sumofroot(root->left)+sumofroot(root->right):0;
    }
    void solve(TreeNode*root){
        int sum=sumofroot(root);
        mp[sum]++;
        if(root->left) solve(root->left);
        if(root->right) solve(root->right);
        
    }
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        if(root==NULL) return {};
        solve(root);
        
        vector<int>v;
        int maxval=0;
        for(auto it:mp){
            if(it.second>maxval){
                maxval=it.second;
                v.clear();
                v.push_back(it.first);}            
            else if(it.second==maxval){
                v.push_back(it.first);
            }
        }
        return v;
    }
};

