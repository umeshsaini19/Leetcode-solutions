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
    Node* findNext(Node* root)
    {
        //simple if root is null, next node will also be null.
        if(!root) return nullptr;
        //if node's left exist, then we will return node's left.
        if(root->left) return root->left;
        //if this if condition fails to execute, this means, there is no left
        //so we will simply return node's right if it exist.
        if(root->right) return root->right;
        
        //suppose neither node left exist nor right,
        //then we will findnext on root's next.
        //recusion fairy.
        return findNext(root->next);
    }
    //dfs function 
    void dfs(Node* root)
    {
        if(!root) return ; //return if root is null
        if(root->left) //if root's left exist
            //assign it's next based on weather root's right exist or not.
            root->left->next = root->right ? root->right : findNext(root->next); 
        //if root's right exist, no issue, make it the next of root's left
        //else whatever findnext(root->next) return, make that the next of 
        //root's left.
        //and if root's right exists
        if(root->right)
        //root's right next eill simply be whatever findnext returns on root->next
            root->right->next = findNext(root->next);
        
        //now recursivly call dfs on root's right as well as root's left.
        // calling dfs on root right first will help us to HAVE ample information 
        //for next of left node.
        //hence calling in this order is recommended.
        dfs(root->right);
        dfs(root->left);
    }
    
    Node* connect(Node* root) 
    {
       if(!root) return nullptr;
       root->next = nullptr;
       dfs(root);
       return root;
    }
};