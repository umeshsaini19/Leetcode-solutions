class Solution {
public:
    
//      bool dfs(int node,vector<int> adj[],vector<int> &vis,vector<int> &pathVis,vector<int> &check){
//     vis[node]=1;
//     pathVis[node]=1;
//     check[node]=0;
    
//     for(auto it:adj[node]){
//         if(!vis[it]){ //when the node is not visited
//             if(dfs(it,adj,vis,pathVis,check)==true){
//                 check[node]=0;
//                 return true;
//             }
                
//         }
//         else if(pathVis[it])//if the node has been previouesly visited 
//         {                   //but it has to be visited on same path means its a cycle
//             check[node]=0;
//             return true;
//         }
//     }
    
//     check[node]=1;
//     pathVis[node]=0;
//     return false;
// }
// vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
//     int V=graph.size();
//     vector<int> vis(V,0);
//     vector<int> pathVis(V,0);
//     vector<int> check(V,0);
    
//     vector<int> adj[V];
//     for(int i=0;i<V;i++){
//         for(int j=0;j<graph[i].size();j++){
//             adj[i].push_back(graph[i][j]);//create adj list from graph
//         }
//     }
    
//     for(int i=0;i<V;i++){
//         if(!vis[i]){ //if the node is not visted
//             dfs(i,adj,vis,pathVis,check);   //then check for all the not vis nodes
//         }
//     }
    
//     vector<int>safeNode;
//     for(int i=0;i<V;i++){
//         if(check[i]==1){//if check the node is checked then it is safe
//             safeNode.push_back(i);
//         }
//     }
    
//     return safeNode;
// }

// };


vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
    int V=graph.size();
    vector<int>ans;
    vector<int>indegree(V);
    
    vector<int>adj[V];
    for(int i=0;i<V;i++){
        for(auto it:graph[i]){
            adj[it].push_back(i);
            indegree[i]++;
        }
    }
    queue<int>q;
    for(int i=0;i<V;i++){
        if(indegree[i]==0) q.push(i);   //jiski indegree zero he sko push krdia 
    }
    while(!q.empty()){
        int size=q.size();
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(auto it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0) q.push(it);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
};


//sara ka sara topo sort he bs last me sorted krdo and start me reverse krdo kyuko  top sort me hum outgoing node dekhte he kisi particular se