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
    
//     he idea is to split the linked list into 2 : one containing all odd nodes and other containing all even nodes. And finally, attach the even node linked list at the end of the odd node linked list.
        
// To split the linked list into even nodes & odd nodes, we traverse the linked list and keep connecting the consecutive odd nodes and even nodes (to maintain the order of nodes) and save the pointer to the first even node.
        
// Finally, we insert all the even nodes at the end of the odd node list.
    ListNode* oddEvenList(ListNode* head) {
        ListNode*odd=head;
        if(head==NULL|| head->next==NULL|| head->next->next==NULL  ) return head;
        ListNode*even=head->next;
        ListNode*even_next=head->next;
        
        while(odd->next and even->next){
            odd->next=even->next;
            
                even->next=odd->next->next;
          
          odd=odd->next;
            even=even->next;
            
        }
        odd->next=even_next;
        return head;
    }
};

//odd ->next=even->next
//odd=odd->next;
//even->next=odd->next;
//even=even->next;