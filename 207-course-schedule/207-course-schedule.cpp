class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& prerequisites) {
         
    vector<int>v;
               vector<int>indegree(V+1, 0);
             vector<int>adj[V];
             for(auto it :prerequisites){
                 adj[it[1]].push_back(it[0]);
             }
    for(int i=0;i<V;i++)
    {
        for(int x: adj[i])
        {
            indegree[x]++;
        }
    }
    queue<int>q;
    for(int i=0;i<V;i++)
    {
        if(indegree[i]==0)
            q.push(i);
    }
    while(q.empty()==false)
    {
        int c= q.front();
        q.pop();
        v.push_back(c);
        for(int x:adj[c])
        {
            indegree[x]--;
            if(indegree[x]==0)
                q.push(x);
        }
    }
   if(v.size()==V) return true; else return false;//topological sort is only possible for directed acyclic graph and agr cycle hogi toh true krdega sarri values ni ayegi bech me kuch gdbd ho jayegi
    }
};