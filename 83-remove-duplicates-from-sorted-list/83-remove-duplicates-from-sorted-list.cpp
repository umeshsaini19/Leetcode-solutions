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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*nxt=head;
        ListNode*curr=head;
        while(curr and curr->next){
            nxt=curr->next;
            if(curr->val==nxt->val)
                curr->next=nxt->next;
            else if(curr->val!=nxt->val)
                curr=nxt;
        }
        return head;
    }
};