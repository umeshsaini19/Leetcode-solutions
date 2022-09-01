class Solution {
public:
     void DFS(vector<vector<int>>& rooms,vector<int>&visited,int node){
        visited[node] = 1;
        for(auto child : rooms[node]){
        
            if(visited[child] == 0){
                 cout<<child<<" ";
                DFS(rooms,visited,child);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int number_of_room = rooms.size();
        vector<int> visited(number_of_room,0);
        DFS(rooms,visited,0);
        for(int i=0;i<rooms.size();i++){
            if(visited[i] == 0) return false;
        }
        return true;
    }
};


//jaise na hme i sme main pta krna he ki ek hi component he na graph ka agr ek se jada he toh false 
//jaise [[1,2],[3,0,1],[2],[0]] yeh tc he isme pe 1 vale pe gya usme 3 ko visit krdia 0 and 1 already viisted he fir dubara back aya and 2 ko visited krdia and khtm and last me visited ko hi vtraverse krlia agr koi value bchi he 0 toh false krdia 