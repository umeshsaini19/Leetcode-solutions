class Solution {
public:
   bool bfs(int node, vector<vector<int>> &adj, vector<int> &color)
    {
        queue<int> q;
        q.push(node);
        color[node] = 1;

        while (!q.empty())
        {
            int curr = q.front();
            q.pop();

            for (int ele : adj[curr])
            {
                // Two adjacent vertex have same color
                if (color[ele] == color[curr])
                    return false;

                // If it is colorless, then color it with different color as parent node
                else if (color[ele] == -1)
                {
                    color[ele] = 1 - color[curr];
                    q.push(ele);
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        int v=graph.size();
		// Create a color array to store colors assigned to all 
		// veritces. Vertex/ number is used as index in this 
		// array. The value '-1' of colorArr[i] is used to 
		// indicate that no color is assigned to vertex 'i'. 
		// The value 1 is used to indicate first color is 
		// assigned and value 0 indicates second color is 
		// assigned. 
        vector<int> color(v,-1);for(int i=0;i<v;i++)color[i]=-1;
		//Handles if graph is disconnected.
        for(int i=0;i<v;i++){
            if(color[i]==-1){
                if(!bfs(i,graph,color))return false;
            }
        }
        return true;
        
        
    }
};

//aur ek baat isse krne se pehle striver ki playlist me video ya apne notes dekhlena dn possible bbipartitaon ka ek que he voh dekhleba
//me agr adjacent ko diff color kr paya toh bipartite hejaise 1 ko ek toh 2 ko dusra 3 ki fir peh;a ab jo 2 ko he uske rever vala 0 ko aise sabko diff

// ek kam ki baat agr odd no of vertex mil jaye toh voh paka hi bipartite na hoga mere dost


 