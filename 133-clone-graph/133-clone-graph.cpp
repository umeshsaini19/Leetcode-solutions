/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    
    //apni adj list neighbour vector me store he ok
    
    void dfs( vector<Node*>&visited ,Node* node,Node* copy){
        visited[copy->val]=copy;// har ek  position pe uski node daldo
        for(auto x:node->neighbors){
            if(visited[x->val]==NULL){
                Node* newNode=new Node(x->val);//neighbors check krke value dedi
                (copy->neighbors).push_back(newNode); //jo new node bnai he usko copy se atttach krde
                dfs(visited,x,newNode);
            }
            else{
                (copy->neighbors).push_back(visited[x->val]);
            }
        }
        
    }    
//     void dfs(Node* node, Node* root, vector <Node*>& vis){
//         for(auto n : node->neighbors){      //all the neighbors are approached next
//             if(vis[n->val]==NULL){          //if not visited yet
//                 Node* no = new Node(n->val);            //create new node
//                 vis[n->val]=no;                         //marking it visited
//                 (root->neighbors).push_back(no);        //made new node(i.e no) as neighbor of node of cloned graph
//                 dfs(n, no, vis);                        
//             }
//             else
//                 (root->neighbors).push_back(vis[n->val]);       //already visited so just inserting it into neighbors
//         }
//     }
// };
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;  //agr node hi  null he toh return null hi hoga
        vector<Node*>visited(101,NULL); //ab  yeh visited pta hi he ki jo pehle se visited he kyu pura dfs chalaye sidha visited se value uthalo and 1000 constraints 
            Node *copy=new Node(node->val);// yeh first node derkhi thi hme jaise baki kisi code me 0,0 krte he vasse voh bnali
            dfs(visited,node,copy);
        return copy;
    }
};


//   Node* cloneGraph(Node* node) {
//         if(node == NULL)                    //if graph is empty, returning null
//             return NULL;
        
//         vector <Node*> vis(101, NULL);      //visited array
//         Node* root = new Node(node->val);   //created new root and initialised its value with value of old root
//         vis[node->val]=root;                //marked it visited
//         dfs(node, root, vis);
//         return root;
//     }
    
//     void dfs(Node* node, Node* root, vector <Node*>& vis){
//         for(auto n : node->neighbors){      //all the neighbors are approached next
//             if(vis[n->val]==NULL){          //if not visited yet
//                 Node* no = new Node(n->val);            //create new node
//                 vis[n->val]=no;                         //marking it visited
//                 (root->neighbors).push_back(no);        //made new node(i.e no) as neighbor of node of cloned graph
//                 dfs(n, no, vis);                        
//             }
//             else
//                 (root->neighbors).push_back(vis[n->val]);       //already visited so just inserting it into neighbors
//         }
//     }
// };