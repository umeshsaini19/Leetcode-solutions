/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
//     yeh neche vali photo dekhna mja a jayega
//     https://leetcode.com/problems/linked-list-cycle-ii/discuss/1248379/C%2B%2B-Solution-with-pictoral-explanation
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            
            if(slow==fast) return true;
        }return false;
    }
};