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
 void inorder(TreeNode* root, vector<int> &data)
    {
        if(root == 0) return;
        inorder(root->left, data);
        data.push_back(root->val);
        inorder(root->right, data);
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2, res;
        
        inorder(root1, v1);
        inorder(root2, v2);
        
        int i = 0, j = 0;
        
        while(i < v1.size() && j < v2.size())
        {
            if(v1[i] < v2[j])
                res.push_back(v1[i++]);
            else if (v1[i] > v2[j])
                res.push_back(v2[j++]);
            else
            {
                res.push_back(v1[i++]);
                res.push_back(v2[j++]);
            }
        }
        
		// If any value is left in v1 array then push it
        while(i < v1.size())
        {
            res.push_back(v1[i++]);
        }
        
		// If any value is left in v2 array then push it
        while(j < v2.size())
        {
            res.push_back(v2[j++]);
        }
        
        return res;
    }
};

//inorder lgao ek sath and push krte jao dono ko

//ek toh yeh simply kr hi skte heh

 // vector<int> res;
 //     void dfs(TreeNode *root)
 //     {
 //          if (!root)
 //               return;
 //          res.push_back(root->val);
 //          dfs(root->left);
 //          dfs(root->right);
 //     }
 //     vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
 //     {
 //          dfs(root1);
 //          dfs(root2);
 //          sort(begin(res), end(res));
 //          return res;
 //     }

//yeh secod trike jo mera fav he 

// void inorder(TreeNode* root, vector<int> &data)
//     {
//         if(root == 0) return;
//         inorder(root->left, data);
//         data.push_back(root->val);
//         inorder(root->right, data);
//     }
    
//     vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
//         vector<int> v1, v2, res;
        
//         inorder(root1, v1);
//         inorder(root2, v2);
        
//         int i = 0, j = 0;
        
//         while(i < v1.size() && j < v2.size())
//         {
//             if(v1[i] < v2[j])
//                 res.push_back(v1[i++]);
//             else if (v1[i] > v2[j])
//                 res.push_back(v2[j++]);
//             else
//             {
//                 res.push_back(v1[i++]);
//                 res.push_back(v2[j++]);
//             }
//         }
        
// 		// If any value is left in v1 array then push it
//         while(i < v1.size())
//         {
//             res.push_back(v1[i++]);
//         }
        
// 		// If any value is left in v2 array then push it
//         while(j < v2.size())
//         {
//             res.push_back(v2[j++]);
//         }
        
//         return res;
//     }