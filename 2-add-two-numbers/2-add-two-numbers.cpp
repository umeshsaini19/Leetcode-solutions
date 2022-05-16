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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL) return NULL;   //yeh 3no line base cases he  
        if(l1==NULL) return l2;
        if(l2==NULL ) return l1;
        ListNode* node=new ListNode(0);  //yeh ek dummy node start krne ke liye ki yahan se age result hoga
       ListNode*temp=node;       //temp esleye ki dummy node head ko point krle and temp apna move krta rhe
        int carry=0;
      
        while(l1!=NULL || l2!=NULL || carry){   //3no jab ek sath zero hoge tb game khtm
              int sum=0;             
            if(l1!=NULL){
                sum+=l1->val;
            l1=l1->next;}
            if(l2!=NULL){ sum+=l2->val;
            l2=l2->next;}
            sum+=carry;
            carry=sum/10;                     //carry divide krne se nikalta and value % krne se like 7%10 toh 7 rhega pr 11%10 1 ayega jo hme chaiye 
              ListNode* newn=new  ListNode(sum%10);
            temp->next=newn;          //temp ke temp pe hi new node attach krni he 
            temp=temp->next;             //fir temp ko age bda do
        }
        return node->next;            //bcz node hi apna dummy he uske agle se apna ans hoga
        
        
    }
};