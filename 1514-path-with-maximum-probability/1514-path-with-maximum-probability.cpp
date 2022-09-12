class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        //make graph 
        vector<vector<pair<int,double>>> graph(n);
        //make graph
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back({edges[i][1],succProb[i]});
            graph[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        
        vector<bool> visited(n,false); // keep track for finalised nodes 
        priority_queue<pair<double,int>> pq; // <max probability>,<node> 
        vector<double> dist(n,(double)0.0); // max prob for each node 
        dist[start]=1.0; //prob for start node is definitely one 
        pq.push({dist[start],start}); //
        
        while(!pq.empty()){
            double curr_dist=pq.top().first; //max probability for curr_node
            int curr_node=pq.top().second; // current_node 
            pq.pop();
            visited[curr_node]=true;
            for(auto v : graph[curr_node]){
                //check if adjacent node, v.first can be reached
                // via current node (curr_dist) with more probability 
                if(!visited[v.first] && dist[v.first]<curr_dist*v.second){
                    // update probability 
                    dist[v.first]=curr_dist*v.second;
                    pq.push({dist[v.first],v.first});
                }
            }
        }
        
        // end is where we want to reach and because we have used dijkstra in reverse
        // fashion this will gaurantee max probability for "end" node 
        return dist[end];
    }
    
    
};

//sara dijkstra he yeh bs start and 1.0 push krna he start me and uske ilava hmne max heap use ki bcz hme last me ans max vala chaiaye bakion me hme mini,um ans chaiye hote he es bari max chayetoh hum try kr rhe he maximum path ka 