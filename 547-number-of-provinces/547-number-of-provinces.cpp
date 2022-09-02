class Solution {
public:
    int findpar(int u,vector<int> &parent){
        if(parent[u]==u)return parent[u];
        return parent[u]=findpar(parent[u],parent);
    }
    void unionn(int i,int j,vector<int> &parent,vector<int> &rank){
        int a=findpar(i,parent),b=findpar(j,parent);
        if(rank[a]<rank[b] ){
            parent[a]=b;
        }
        else if(rank[a]>rank[b]){
            parent[b]=a;
        }
        else{
            parent[b]=a;
            rank[a]++;
        }
    }
    int findCircleNum(vector<vector<int>>& g) {
        int n=g.size();
        vector<int> parent(n),rank(n,0);
        for(int i=0;i<n;i++)parent[i]=i;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(g[i][j]){
                    unionn(i,j,parent,rank);
                }
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(parent[i]==i)cnt++;
        }
        return cnt;
    }
};


//yeh second method se bhi kiya gya he yeh question
//  vector <int> parent;
//     int findCircleNum(vector<vector<int>>& is) {
//         int v=is.size();
//         parent.resize(v, -1);
        
//         for(int i=0; i<v; i++)
//             for(int j=i+1; j<v; j++)
//                 if(is[i][j]==1)
//                     unionn(i, j);
        
//         int count=0;
//         for(auto it: parent){
//             if(it == -1)
//                 count++;
//         }
//         return count;
//     }
    
//     void unionn(int i, int j){
//         i = find(i);
//         j = find(j);
//         if(i != j)
//             parent[i]=j;
//     }
    
//     int find(int v){
//         if(parent[v]==-1)
//             return v;
//         else
//             return find(parent[v]);
//     }
// };

//same striver bhaiy VALA HE NOTES ME BHI HE VIDEO BHI