class Solution {
public:
     int dp[200][200];
    bool is_valid(int i,int j,vector<vector<int>> &mat){
        int m = mat.size(), n = mat[0].size();
        if(i >= 0 and j >=0 and i < m and j < n) return true;
        return false;
    }
    int solve(int i,int j,vector<vector<int>> &mat){
        if(dp[i][j] != -1) return dp[i][j];
        
        int op1 = 0,op2 = 0,op3 = 0,op4 = 0;
        
        if(is_valid(i-1,j,mat) and mat[i-1][j] > mat[i][j])
            op1 = solve(i-1,j,mat);
        
        if(is_valid(i+1,j,mat) and mat[i+1][j] > mat[i][j])
            op2 = solve(i+1,j,mat);
        
        if(is_valid(i,j-1,mat) and mat[i][j-1] > mat[i][j])
            op3 = solve(i,j-1,mat);
        
        if(is_valid(i,j+1,mat) and mat[i][j+1] > mat[i][j])
            op4 = solve(i,j+1,mat);
        
        int ans = 1 + max({op1,op2,op3,op4});
        return dp[i][j] = ans;
    }
    int longestIncreasingPath(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int res = 0;
        memset(dp,-1,sizeof dp);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int ans = solve(i,j,mat);
                res = max(res,ans);
            }
        }
        return res;
    }
};
    
// int n,m;
//     int dfs(int i ,int j,vector<vector<int>>& matrix){
//         if(dp[i][j]!=-1) return dp[i][j];
        
//         int cnt=1;
//         if(i>0 and matrix[i-1][j]<matrix[i][j]) cnt=max(cnt,1+dfs(i-1,j,matrix));
//             if(j>0 and matrix[i][j-1]<matrix[i][j]) cnt=max(cnt,1+dfs(i,j-1,matrix));
//             if(i+1<n and matrix[i+1][j]<matrix[i][j]) cnt=max(cnt,1+dfs(i+1,j,matrix));
//             if(j+1<m and matrix[i][j+1]<matrix[i][j]) cnt=max(cnt,1+dfs(i,j+1,matrix));
        
//         return dp[i][j]=cnt;
//     }
//     vector<vector<int>>dp;
//     int longestIncreasingPath(vector<vector<int>>& matrix) {
//          n=matrix.size();
//          m=matrix[0].size();
//         int maxv=INT_MIN;
//        dp.resize(n,vector<int>(m,-1));
//                  for(int i=0;i<n;i++){
//                      for(int j=0;j<m;j++){
//                          maxv=max(maxv,dfs(i,j,matrix));
//                      }
//                  }
//                  return maxv;
//     }
// };


//notes+code with alsisha se kiya he dekhna me easy he bs notes dekhlena
