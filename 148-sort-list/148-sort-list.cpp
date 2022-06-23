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
    
    // 1.Babbar bhaiya se hlka se smja 
    // 2. Sbse pehle merge sort smj le like linked list 2 me divide hui fer age 2 me aise recursion se horah he last me bcha he single element and us element ko usko mergelist ke attach krdia dubara 
    //     3.array ko normal divide kr skte he pr isko krne ke liye chaiye dimag mane toh fast and slow pointer chalake jahan jake slow ruka vahan tk ek linked list uske next yani temop->next ko krdia null hmne and baki dusra side yani slow se age ke kyuki temp pehle perform horha temp =slow and uske badh slow age bda toh temp ek peche chlra ais emanle and jais ehi mid pe aya slow vasse hi bngya kam and todo fodo
    ListNode* sortList(ListNode* head) {
        if(head==NULL ||head->next==NULL) return head;
       ListNode*temp=NULL;
        ListNode*slow=head;
        ListNode*fast=head;
        
        while(fast!=NULL and fast->next!=NULL){
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        temp->next=NULL;
        ListNode*l1=sortList(head);
        ListNode*l2= sortList(slow);
        return mergelist(l1,l2);}
    
    ListNode*mergelist(ListNode*l1,ListNode*l2){
        ListNode*ptr=new ListNode(0);
        ListNode*temp=ptr;
        while(l1!=NULL and l2!=NULL){
        if(l1->val<=l2->val){
            temp->next=l1;
            l1=l1->next;
            temp=temp->next;
        }
            else {
                temp->next=l2;
                l2=l2->next;
                temp=temp->next;
            }
    }
        if(l1!=NULL){
            temp->next=l1;
            temp=temp->next;
            
        }
        if(l2!=NULL){
            temp->next=l2;
            temp=temp->next;
        }
        
        return ptr->next;}

    
};