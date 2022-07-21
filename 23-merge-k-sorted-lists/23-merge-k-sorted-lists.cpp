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
public://q.iske just pechle vala submission dekhke ana and dusri bth maine k sorted array and k sorted linked list me apparoach same c lgai he toh sorted array vala dekhlio agr smj na aye vasse a jayega 
   #define pqi pair<int,ListNode*> 
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pqi,vector<pqi>,greater<pqi>>pq;
        for(auto it: lists){
            if(it)
            pq.push({it->val,it});
        }
        ListNode*head=new ListNode();
        ListNode*temp=head;
        while(!pq.empty()){
            auto it=pq.top().second;
            pq.pop();
            temp->next=it;
            temp=temp->next;
            if(it->next)
                pq.push({it->next->val,it->next});
        }
        temp->next=NULL;
        return head->next;
    }
};



// #define pii pair<int,ListNode*> 
// class Solution {
// public:
//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//         priority_queue<pii,vector<pii>,greater<pii>> pq;
        
//         ListNode* head = new ListNode();
//         ListNode* curr = head;
        
//         for(auto it : lists) 
// 			if(it)  pq.push({it->val,it});
        
//         while(!pq.empty()){
//             auto it = pq.top().second;
//             pq.pop();
            
//             curr->next = it;
//             curr = curr->next;
            
//             if(it->next) pq.push({it->next->val,it->next});
//         }
            
//         curr->next = NULL;
        
//         return head->next;
//     }