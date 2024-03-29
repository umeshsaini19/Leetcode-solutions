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
    ListNode* reverse(ListNode*head){
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*nxt;
        while(curr!=NULL){
            nxt=curr->next;
          
            curr->next=prev;
  
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast->next!=NULL and fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        while(slow!=NULL){
            if(head->val!=slow->val) return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
};

// ListNode* reverse(ListNode* head){
//         ListNode* prev=nullptr, *curr=head, *next=nullptr;
        
//         while(curr!=nullptr){
//             next=curr->next;
//             curr->next=prev;
            
//             prev=curr;
//             curr=next;
//         }
        
//         return prev;
//     }
    
//     bool isPalindrome(ListNode* head) {
//         ListNode *fast=head, *slow=head;
        
//         while(fast!=nullptr && fast->next!=nullptr){
//             fast=fast->next->next;
//             slow=slow->next;
//         }
        
//         ListNode *list1 = head, *list2 = reverse(slow);
        
//         while(list1!=nullptr && list2!=nullptr){
//             if(list1->val!=list2->val)
//                 return false;
            
//             list1=list1->next;
//             list2=list2->next;
//         }
        
//         return true;
//     }