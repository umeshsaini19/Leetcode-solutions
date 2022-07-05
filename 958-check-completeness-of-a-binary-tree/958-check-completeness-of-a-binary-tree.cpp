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
    //itna sochne ke badh dimag me ek bath bethi he ki last left se pehle tk sarre level chaiye hme pure and jo last level he ya toh usme left jitna mrji ho ya dono hi na ho agr right huya left ni toh bhi false hoga and yeh simple bfs se hoga ki hmne left right dala and jiase hi right null dal diya gya toh jab check ki bari ai hme pta lga righ null agya toh false hogi va;ue and return false 
    //pop krte timr pta lgega ki hm sahi he ya nahi agr pop krte time null pop hogya toh hum glt he yani kisi level pe dikkat he
 
  bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            TreeNode* t = q.front();
            q.pop();
            
            if (t == NULL) {
                while (!q.empty()) {
                    if (q.front() != NULL)
                        return false;
                    q.pop();
                }
                return true;
            } else {
                q.push(t->left);
                q.push(t->right);
            }
        }
      return true;}
};
 