class Solution {
public:
 bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int> G[n+1];
        
        for(auto p: dislikes) {
            int u = p[0], v = p[1];
            G[u].push_back(v);
            G[v].push_back(u);
        }
        
        vector<int> colour(n+1, -1);        
        for(int i=1;i<=n;i++) {
            queue<int> q;
            if(colour[i] == -1) {
                colour[i] = 0;
                q.push(i);
            }
            while(!q.empty()) {
                int u = q.front();
                q.pop();
                for(int v: G[u]) {
                    if(colour[v] == -1) {
                        colour[v] = 1-colour[u];
                        q.push(v);
                    } else if(colour[u] == colour[v]) {
                        return false;
                    }
                }
            }
        }
        return true;
    } 
};