class Solution {
public:
//     bool check(int i,int j,int row,int col){
//         if(i<0||j<0||i>row-1||j>col-1) return false;
//         else return true;
//     }
//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//         int n=mat.size();
//         int m=mat[0].size();
//         vector<vector<int>>ans(n,vector<int>(m,-1));   //AISE MATRXI CREATE HOTI HE
//         queue<pair<int,int>>q;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(mat[i][j]==0){
//                     q.push({i,j});
//                     ans[i][j]=0;
//                 }
//             }
//         } 
//         int row=n;  //yeh bs timepass ke liye likha h e kyu kiupr bdlna pdta mereko
//         int col=m;
//         while(!q.empty()){
//             int i=q.front().first;
//             int j=q.front().second;
            
//             if(check(i+1,j,row,col) and ans[i+1][j]==-1)
//             {
//                 q.push({i+1,j});
//                 ans[i+1][j]=ans[i][j]+1;
//             }
            
//              if(check(i-1,j,row,col) and ans[i-1][j]==-1)
//             {
//                 q.push({i-1,j});
//                 ans[i-1][j]=ans[i][j]+1;
//             }
//              if(check(i,j+1,row,col) and ans[i][j+1]==-1)
//             {
//                 q.push({i,j+1});
//                 ans[i][j+1]=ans[i][j]+1;
//             } if(check(i,j-1,row,col) and ans[i][j-1]==-1)
//             {
//                 q.push({i,j-1});
//                 ans[i][j-1]=ans[i][j]+1;
//             }
//             q.pop();
//         }
//         return ans;
//     }
    
//     //code vasse intitv he dekh kr hi smj a jayega yeh and 
// };




  vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> visit(n,vector<int>(m,100000));//give 10000 that is a max value to all the n*m matrix cells
		//you can use INT_MAX also 
        //i am using visit vector to store my answer
        queue<pair<int,int>> q; //queue to store indexes
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({i,j});//push the indexes where 0 is found
                    visit[i][j] = 0;//mark those cells as 0 as it is 0 distance from 0
                }
            }
        }
        //now bfs search
        while(!q.empty()){
            
            int s = q.size();
            
           
                auto p = q.front();
                q.pop();
                
                int x = p.first;
                int y = p.second;
                //now we will check all the possible four direction and if in any direction if the distance from current cell is less than already presen distance for that cell change that cell's distance to new and puss this index to the queue 
                if(x+1<n && visit[x+1][y]>visit[x][y]+1){
                    q.push({x+1,y});
                    visit[x+1][y] = visit[x][y]+1;
                }
                
                if(y+1<m && visit[x][y+1]>visit[x][y]+1){
                    q.push({x,y+1});
                    visit[x][y+1] = visit[x][y]+1;
                }
                
                if(x-1>=0 && visit[x-1][y]>visit[x][y]+1){
                    q.push({x-1,y});
                    visit[x-1][y] = visit[x][y]+1;
                }
                
                if(y-1>=0 && visit[x][y-1]>visit[x][y]+1){
                    q.push({x,y-1});
                    visit[x][y-1] = visit[x][y]+1;
                }
                
            }
            
        
        
        
      return visit;//return the 2d vectod we created
  }
    
};