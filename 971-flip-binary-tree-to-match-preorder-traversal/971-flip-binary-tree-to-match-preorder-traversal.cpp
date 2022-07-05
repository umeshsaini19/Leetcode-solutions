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
    
    // pehle thoda sa question smj liya jaye question ak mtlb he ki apko ek array type dia huya he uski jo jo value ayegi voh value given tree ke preorder krne pe ya fer preorder ke flip krne pe same arhi he toh kis kis value ko flip kiya he voh ans do else -1;;
    
    vector<int>flip;
    int i;
    
    bool solve(TreeNode* root, vector<int>& v){
        if(root==NULL) return true;
        if(root->val!=v[i++]) return false;
        if(root->left and root->left->val !=v[i]){ //agr root exist krta he and uski value equal ni he toh 
            flip.push_back(root->val);  //yeh value flip krni pdegi 
            return solve(root->right,v) and solve(root->left,v);  //agr match ni he toh ek tarah se awap krne ki jagah value ki check krlo 
        }
        return solve(root->left,v) and  solve(root->right,v); //agr value match he toh left ko math kro pehle ad fer right ko
    }
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& voyage) {
        i=0;
        return solve(root,voyage)?flip:vector<int>{-1};//agr true ata he toh thik else -1 return kro 
    }
};

