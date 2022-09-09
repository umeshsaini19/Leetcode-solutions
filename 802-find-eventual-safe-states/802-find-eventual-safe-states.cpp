class Solution {
public:
      bool dfs(int src,vector<int>&vis,vector<int>&dfsVisited,vector<int>&curCycle,vector<vector<int>>&graph){
        vis[src] = true;
        dfsVisited[src] = true;
        for(int u : graph[src]) {
            if(!vis[u] and dfs(u, vis, dfsVisited, curCycle, graph)) {
                curCycle[src] = true; //add to ans
                return true;
            }
            else if(dfsVisited[u] == true) {
                curCycle[src] = true; // add to ans
                return true;
            }
        }
        dfsVisited[src] = false;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vis(n, false), dfsVisited(n, false), curCycle(n, false);
        
        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                dfs(i, vis, dfsVisited, curCycle, graph);
            }
        }
        vector<int>ans;
        for(int i = 0; i < n; i++) {
            if(curCycle[i] == false) ans.push_back(i);
        }
        return ans;
    }
};