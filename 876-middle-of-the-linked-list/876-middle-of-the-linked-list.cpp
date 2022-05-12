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
    ListNode* middleNode(ListNode* head) {
        ListNode*slow=head;ListNode*fast=head;
        while(fast!=nullptr &&  fast->next!=nullptr){    //fast!=null vala even ke case me kam ata jab fast vala liinked list khtm krdena and dusra odd me 
            slow=slow->next;
            fast=fast->next->next;
        }return slow;
        
    }
};