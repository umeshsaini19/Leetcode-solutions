/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
class Solution {
public:
    //function returning node and take input as node, 
    //finds the next node for each node.
    Node *findNext(Node *root)
    {
        if(!root) return NULL;
        
        if(root -> left) return root -> left;
        if(root -> right) return root -> right;
        
        return findNext(root->next);
    }
    
    void populateRight(Node* root)
    {
        if(!root) return;
        
        
        if(root -> left)
        {
            root -> left -> next = root -> right ? root -> right : findNext (root -> next);
        }
        
        if(root -> right)
        {
           root -> right -> next = findNext(root -> next);           
        }
        
        /*
        if we are doing left recur first, then right recur 
        If we have more than 4 levels, we may miss at some point to link next for right pointer 
        for eg :
                      1                          
                   2      3                           
                 4   5   6   7                       
                8 N 1 0 N N 5 5                       
                
          so we are doing preorder, root -> left -> right
          1, 2, 4, 8, 5, 1, 0, 6, 7, 5, 5
          
          at 1st time, we link 1's child 2 -> 3 , 3 -> null
          at 2nd time, we link 2's child 4 -> 5 , 5 -> 6
          at 3rd time, we link 8 with 5's left child 1 so, 8 -> 1 (because we already linked 4->5)
          at 4th time, we link 5's child 1 -> 0, but to link 0 -> 5 (7th left child, we don't have link with 6 -> 7, so we can't reach 7) 
          
          so only we are doing recursion for right first and then left
             
        */
        
        populateRight(root -> right);
        populateRight(root -> left);
       
    }
   
    
    Node* connect(Node* root) {
        if(!root) return NULL;
        
        populateRight(root);
        
        return root;
    
    }
};