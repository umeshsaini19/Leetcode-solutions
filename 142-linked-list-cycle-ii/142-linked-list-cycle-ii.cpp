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
    ListNode *detectCycle(ListNode *head) {
        ListNode*slow=head,*fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
                if(fast==slow) break;
        }
       if(fast==NULL || fast->next==NULL) return NULL;  //yeh condition esleye he ki node hi ek he upr fast slow vali condito tph chli ni ab yeh bhi glti na chal jaye 
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }return slow;
    }
};
// };  ListNode* slow=head;
//     ListNode* fast=head;   
//         while(fast&&fast->next)
//         {
//             slow=slow->next;
//             fast=fast->next->next;
//           if(slow==fast)
//            break;   
//         }
//            if(fast==NULL || fast->next==NULL) return NULL;
//         slow=head;
//         while(slow!=fast)
//         {
//             slow=slow->next;
//             fast=fast->next;
//         }
//         return slow;