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

         //Count the current group and target group. If current group length is even then loop from first
//node pointer of current group and assign value from stack.


class Solution {
public:
    
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        
        // running group item count
        int iterGroup = 1;
        
        // target group
        int group = 1;

        ListNode * node = head;
        
        // first node of the current group
        ListNode * start;
        
        // store node value
        stack<int>stak;
        
        while(node)
        {
            stak.push(node->val);
            
            // as soon as group item count reaches target group or last of linked list 
            // assign value from first node of current group from stack
            if(iterGroup==group || node->next==NULL)
            {
                // reverse list only if current length is even
                if(!(iterGroup&1))
                {
                    while(iterGroup--)
                    {
                        start->val = stak.top();
                        stak.pop();
                        start = start->next;
                    }              
                }
                
                start = node->next;                
                iterGroup = 0;
                group++;    // increment next group value
            }
                            
            node = node->next;
            iterGroup++;  
        }
        
        return head;
    }
};
