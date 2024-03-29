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
    
    //c++ me first commented post he jo sbse bdia he smj a jayega
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        
        ListNode* dummyNode=new ListNode(0);
        ListNode* currNode=head;
        ListNode* prevNode=dummyNode;
        
        while(currNode and currNode->next){
            prevNode->next=currNode->next;
            currNode->next=prevNode->next->next;
            prevNode->next->next=currNode;
            
            prevNode=currNode;
            currNode=currNode->next;
            
        }
        return dummyNode->next;
    }
};