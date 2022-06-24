class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j){
        if(i<0|| j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]=='2'||grid[i][j]=='0') return ;
        
        grid[i][j]='2';
        dfs(grid,i+1,j);
          dfs(grid,i,j-1);
          dfs(grid,i,j+1);
          dfs(grid,i-1,j);
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int n =grid.size();
        int m=grid[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
    }
};

//isme main vahi he ki dekho visited he agr pehle se visited he toh uski traf jane ki nahi and jab first time visit kr rhe he toh usko 2 k rhe he tan jo change ka pta lgta rha baki mostly charon side ghumana hi he 