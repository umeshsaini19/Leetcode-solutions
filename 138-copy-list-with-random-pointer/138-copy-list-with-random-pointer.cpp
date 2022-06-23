/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        //striver bhaiya se sikha he jo sikha he //neche vale solutions me cmnt bhi he
        
        Node*iter=head;
        Node*front=head;
        while(iter!=NULL){
            front=iter->next;
            Node*copy=new Node(iter->val);
            iter->next=copy;
            copy->next=front;
            iter=front;
        }
        
        
        
        
        iter=head;
        while(iter!=NULL){
            if(iter->random!=NULL){
                iter->next->random=iter->random->next;
                
            }
            iter=iter->next->next;
        }
        
        iter=head;
        front=head;
        Node*dummy=new Node(0);
        Node*face=dummy;
        while(iter!=NULL)
        {
            front=iter->next->next;
            face->next=iter->next;
            iter->next=front;
            iter=front;
            face=face->next;
            
        }
        return dummy->next;
        
        
        
        
        
//          Node *iter = head; 
//           Node *front = head;

//           // First round: make copy of each node,
//           // and link them together side-by-side in a single list.
//           while (iter != NULL) {
//             front = iter->next;

//             Node *copy = new Node(iter->val);
//             iter->next = copy;
//             copy->next = front;

//             iter = front;
//           }

//           // Second round: assign random pointers for the copy nodes.
//           iter = head;
//           while (iter != NULL) {
//             if (iter->random != NULL) {
//               iter->next->random = iter->random->next;
//             }
//             iter = iter->next->next;
//           }

//           // Third round: restore the original list, and extract the copy list.
//           iter = head;
//           Node *pseudoHead = new Node(0);
//           Node *copy = pseudoHead;

//           while (iter != NULL) {
//             front = iter->next->next;

//             // extract the copy
//             copy->next = iter->next;

//             // restore the original list
//             iter->next = front;
              
//             copy = copy -> next; 
//             iter = front;
//           }

//           return pseudoHead->next;
    }
};