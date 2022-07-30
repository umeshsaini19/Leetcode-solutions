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
    unordered_set<int>st;
    // pehle que clear krte he jaise hmne 3 and 5  ko delete krdia toh tree  1 2 null(jo 3 ki jagah pe null he ) and fir 4 and 6 and 7 alag alag tree bche toh dono ko alag alag store
    
    //ab isme postorder hi kyu use horha dekho manlo 2 hme delete krna hota toh hme pehle left and right ko ans me dalna he fir hi 5 ko null kra he left right and root isleye 
    vector<TreeNode*>res;
    void solve(TreeNode*&root){
        if(root!=NULL) {
        solve(root->left);
        solve(root->right);
        if(st.find(root->val)!=st.end())
        {
            if(root->left) res.push_back(root->left);
            if(root->right) res.push_back(root->right);
            root=NULL;  //jaise 2 he agr usko delete krna hota  toh usko NULL krdo kui 1 ke left ko NULL shuru krna hoga
            delete root;  //memory waste bchane ke liye
        }
    }
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        if(to_delete.size()==0) return {root};
        //bcz traversal time o(1) hota he unordered a 
        for(auto it:to_delete) st.insert(it);
        solve(root);
        if(root) res.push_back(root);  //agr root dlt na hoya tn va kyuki postorder vich root end vich use vich anda
        
        return res;
    }
};