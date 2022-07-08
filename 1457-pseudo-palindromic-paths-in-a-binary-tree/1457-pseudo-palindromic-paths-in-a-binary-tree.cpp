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
    
    //sbse pehle palindrone dekhe he 112233 yeh palindrome he ok 11233 yeh bhi palindrone he toh ek bath dekh ke smj arhi hogi ki count of centre no should be less than 1like ab 2 ka count 1 he toh sahi he and 112233 vale case me odd ka count zweo he toh bhi palindrone he yehi mainly bathchit he ki map use kro har ek root to leaf map me dalo fir leaf node pe punchte hi map kko iterate ko it.second%2 kr0==1 kro and 1 aye toh count bdhao odd kka and agr agr odd ka count less than 1 ya 1 rehta he na toh res++ kahain bhi odd ka count 1 se jada huya mtlb hum galt he voh value map se minus krdo and odd=0 krdo 
    void rec(TreeNode* root) {
        if (!root)
            return;
        
        m[root->val]++;
        
        // If we got to a leaf - check if the path can be a polindrome
        if (!root->left && !root->right) {
            int odd = 0;
            for (auto a : m)
                if (a.second % 2 == 1)
                    odd++;
           // cout<<odd<<" ";

            if (odd <= 1)
                res++;
        }
        
        rec(root->left);
        rec(root->right);  
//         for(auto it:m){
            
//             cout<<it.first<<it.second<<" ";
//         }cout<<endl;
        m[root->val]--;
      
       
//         for(auto it:m){
            
//             cout<<it.first<<" ";
//         }
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        rec(root);
        return res;
    }
    
private:
    int res = 0;
    unordered_map<int, int> m;
};