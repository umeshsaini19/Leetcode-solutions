class Solution {
public:
    void dfs(int n,int src,vector<int>&path, vector<vector<int>>&ans,vector<vector<int>>& graph){
        if(src==n-1){
            ans.push_back(path);
            return ;
        }
        for(auto it:graph[src]){
            path.push_back(it);
            dfs(n,it,path,ans,graph);
    path.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>path;
        path.push_back(0);
        int n=graph.size();
        dfs(n,0,path,ans,graph);
        return ans;
        
        
        
    }
};

// // I think it would be O(n * 2^n) where n = number of nodes.
// Because for each node (n) we are exploring all the possible paths (2^n). And as for each node we have 2 possibilities (either take it or do not take it).
// So, for n nodes total number of paths = 2 * 2 * .. n times = 2^n