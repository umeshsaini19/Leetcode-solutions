class Solution {
public:
int n,m;
    int dfs(int i ,int j,vector<vector<int>>& matrix){
        if(dp[i][j]!=-1) return dp[i][j];
        
        int cnt=1;
        if(i>0 and matrix[i-1][j]<matrix[i][j]) cnt=max(cnt,1+dfs(i-1,j,matrix));
            if(j>0 and matrix[i][j-1]<matrix[i][j]) cnt=max(cnt,1+dfs(i,j-1,matrix));
            if(i+1<n and matrix[i+1][j]<matrix[i][j]) cnt=max(cnt,1+dfs(i+1,j,matrix));
            if(j+1<m and matrix[i][j+1]<matrix[i][j]) cnt=max(cnt,1+dfs(i,j+1,matrix));
        
        return dp[i][j]=cnt;
    }
    vector<vector<int>>dp;
    int longestIncreasingPath(vector<vector<int>>& matrix) {
         n=matrix.size();
         m=matrix[0].size();
        int maxv=INT_MIN;
       dp.resize(n,vector<int>(m,-1));
                 for(int i=0;i<n;i++){
                     for(int j=0;j<m;j++){
                         maxv=max(maxv,dfs(i,j,matrix));
                     }
                 }
                 return maxv;
    }
};

