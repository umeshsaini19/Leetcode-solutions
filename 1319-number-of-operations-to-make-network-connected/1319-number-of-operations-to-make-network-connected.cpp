class Solution {
public:
     int find(int node, vector<int> &parent){
        if(parent[node] == node) return node;
		// Path compression
        return parent[node] = find(parent[node], parent);
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n-1) return -1;
        int comp = 0;
        vector<int> parent(n);
        vector<int> rank(n);
        for(int i=0; i<n; i++){
            parent[i] = i;
            rank[i] = 0;
        }
        
        for(auto i: connections){
            int p1 = find(i[0], parent);
            int p2 = find(i[1], parent);
            
            if(rank[p1] < rank[p2]){
                parent[p1] = p2;
            }
            else if(rank[p2] < rank[p1]){
                parent[p2] = p1;
            }
            else{
                parent[p1] = p2;
                rank[p2]++;
            }
        }
        
        for(int i=0; i<n; i++){
            if(parent[i] == i) comp++;
        }
        
        return comp-1;
    }
};



//dekh just simple he ki manle koi 4 he 4 me se koi ek single he khud me and baki sarre apas me paired toh jayaz si bat he ek chaiye hoga usko jodne ke liye toh us hisab se jaise 4 he 0,1,2,3                    jo 0 he 1 and 2 ka baap he and 0 khud ka bhi baap he and 3 khud hi khud ka baap he toh hmne logic me voh find krliye jo khudke baap he unme 1 minus krdia bcz ek 0 bhi aisa hoga jo khud baap he 