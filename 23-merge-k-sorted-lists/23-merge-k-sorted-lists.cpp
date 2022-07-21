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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>temp;
        for(int i=0;i<lists.size();i++){
            while(lists[i]!=NULL){
            temp.push_back(lists[i]->val);
            lists[i]=lists[i]->next;
        }
        }
        sort(temp.begin(),temp.end());
        ListNode* ans=new ListNode(0);
        ListNode* move=ans;
        for(int i=0;i<temp.size();i++){
            ans->next=new ListNode(temp[i]);
            ans=ans->next;
        }
        return move->next;
    }
};
// };     vector<int>temp;
//         for(int i=0; i<lists.size(); i++){
//            while(lists[i] != NULL){
//                temp.push_back(lists[i]->val);
//                lists[i]=lists[i]->next;
//            }
//         }
        
//         sort(temp.begin(), temp.end());
//         ListNode* ans=new ListNode(0);
//         ListNode* res=ans;
//         for(int i=0; i<temp.size(); i++){
//             ans->next=new ListNode(temp[i]);
//             ans=ans->next;
//         }
        
//         return res->next;