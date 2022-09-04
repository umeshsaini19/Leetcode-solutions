class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int>graph[n+1];  //yeh graph bnaya n+1 ka esleye kyuki 0 based indexing he mere bhai 
        
        for(auto it: dislikes){  //jo given disklikes he unko ek graph me daldo ki badh me jab fill krne lge colour array toh direct check krle kisko konca ni psnd
            int u=it[0],v=it[1];
            graph[u].push_back(v);
            graph[v].push_back(u);  //1 ko 3 ni psnd toh 3 ko 1 bhi ni psnd
            
            
        }
        
        vector<int>color(n+1,-1);
        for(int i=1;i<=n;i++){
        queue<int>q;
            if(color[i]==-1){
                color[i]=0; 
                //pehla color dedia
            q.push(i);
              //  cout<<q.top();
            }//yeh yahan tk first value queue
            while(!q.empty()){
                int node=q.front();
                q.pop();
                for(auto it :graph[node]){
                    if(color[it]==-1)
                    {
                        color[it]=1-color[node];
                        q.push(it);
                    }
                    else if(color[it]==color[node])
                        return false;
                }
            }
        }
            return true;
    }
        
};


// striver bhaiya ki bipartite ki video he and apne notes he is same que ka code codebix se smja he baki jrurat v ni he jada 

// dekh simple bfs lgaya and me khud ko first colour dekhke mere jo jo neighbour he jo muje psnd ni he unko dusra colour derha hu and in the end agr jisko jo jo neighbour psnd ni he sab apni mrji ke acc fit huye toh return true 