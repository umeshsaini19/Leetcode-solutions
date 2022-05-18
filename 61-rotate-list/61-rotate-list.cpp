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
    ListNode* rotateRight(ListNode* head, int k) {
        int len=1;
        if(head==NULL || head->next==NULL || k==0) return head;
        ListNode* curr=head;
        while(curr->next!=NULL){  //yahan pe hum log length calculate kr rhe heh
            len++;
        curr=curr->next;
        }
        curr->next=head;   //jaise hi length calculate hu last node ko head se connect krke circular ll bnadi
        k=k%len;           //bcz agr k =7 and len=5 toh hum faltu me 7 bari kyu kre hum 5%7 krke 2 bari krenge toh bhi same hi ayega ans
        k=len-k;                   //yeh itni bari curr ko age bdao itna hote hi jahan pe rukhe uska next hi head hoga rortate ka and next ko null krdo 
        while(k--){
            curr=curr->next;
            
        }
        head=curr->next;
        curr->next=NULL;
        return head;
    }
};