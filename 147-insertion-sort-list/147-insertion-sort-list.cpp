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
    
    //iske liye insertion sort bhi ana chaiye first bath toh yeh second video ayushi di se dekhi and now khud ki documentation 
    
//     1. Hmne exactly krna kya he hmne ek new linked list bnani he jismme sirf dummy ek new node ho baki toh purani vali se todkar edr jodni he 
//     2. hmne dummy li sbse age ab uske age vali me first node jo ki purani linked list he sidhi attach krdi kyuki first toh ayegi hi ayegi 
//     3. ab jab second ai toh vahan se comparison shuru huya ek pointer next  liya jo ki purani linked list kke head ke age vali node pe khada he and ek temp liya jo ki dummy se shuru krdia ab manlo ki first node dummy ke agli sahi he and jo agli ayegi voh bhi sahi he usko temp->next pe lgado normally hi 
//    4. ab manlo jo next node ai voh choti agyi second se toh hmne pehle head ka yani purani head node ka natta new node jo last me he usse joda then
//         temp->next pe head ko joda ki koi link faltu na break ho and head ko jo head se agli node he purni linked list me uspe daldia bs itana shai ka he 
        
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy=new ListNode(1000);
        while(head){
            ListNode*next=head->next;
            ListNode*temp=dummy;
            
            while(temp->next and temp->next->val<head->val){
                temp=temp->next;
            }
            head->next=temp->next;
            temp->next=head;
            head=next;
        }
        return dummy->next;
    }
};