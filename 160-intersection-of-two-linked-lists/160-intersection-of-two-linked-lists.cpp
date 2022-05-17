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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       ListNode*a=headA;
         ListNode*b=headB;
        while(a!=b){
            if(a==NULL) a=headB;     //manlo a ki length 5 he and b ki 6 toh hum ako bhi 11 chaleyenge and b ko bhi 11 pehle a apne //5 chal liya jaise hi null pe puncha uske b ke 6 aur chalado same b bhi dono side chal dega and ek round ke badh dono sath e chlne //lgenge 
            else {
                a=a->next;
            }
            if(b==NULL) b=headA;
            else{
                b=b->next;
            }
        }return b;
    }
};