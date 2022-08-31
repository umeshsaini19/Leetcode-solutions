class Solution {
public:
    int ct=0;
    
    void dfs(int n,int m,vector<vector<int>>& grid,int i,int j){
        if(i<0||i>=n||j<0||j>=m) return ;
        if(grid[i][j]!=1) return ;
        grid[i][j]=0;
        ct++;
        dfs(n,m,grid,i-1,j);
            dfs(n,m,grid,i,j-1);
            dfs(n,m,grid,i+1,j);
            dfs(n,m,grid,i,j+1);
        }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            if(grid[i][0]==1) dfs(n,m,grid,i,0);
            if(grid[i][m-1]==1) dfs(n,m,grid,i,m-1);
        }
        for(int i=0;i<m;i++){
            if(grid[0][i]==1) dfs(n,m,grid,0,i);
            if(grid[n-1][i]==1) dfs(n,m,grid,n-1,i);
        }
        ct=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)
                    dfs(n,m,grid,i,j);
            }
        }
        return ct;
    }
};