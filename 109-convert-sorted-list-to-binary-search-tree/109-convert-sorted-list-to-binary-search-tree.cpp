/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
  //  TreeNode* solve(ListNode* head, ListNode* tail = NULL) {
//       if(head==tail) return NULL;
//         ListNode*fast=head;
//         ListNode*slow=head;
//         while(fast!=tail and fast->next!=tail){// first time ke liye tail=null fir har bari ke liye tail dono side ke liye bdl rha he syane mere 
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         TreeNode*dummy=new TreeNode(slow->val);
//         dummy->left=solve(head,slow);
//         dummy->right=solve(slow->next,tail);
//         return dummy;
    
// }
   TreeNode* sortedListToBST(ListNode* head) {
     
//        return solve(head);
       
       
       //yeh second jisse smj a jave
       
       
       if(!head)
            return NULL;
        if(!head->next)
        {
            return new TreeNode(head->val);
        }
        ListNode *slow=head,*fast=head->next;
        while(fast->next&&fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            
        }
        ListNode *mid=slow->next;
        slow->next=NULL;
        
        TreeNode *root=new TreeNode(mid->val);
        root->left=sortedListToBST(head);
        root->right=sortedListToBST(mid->next);
        return root;
         
    }
};

//fast slow lgake mid pta krlia fer start yani head se slow tk same kam krte gye and age same and pehle vala left and age vala right 