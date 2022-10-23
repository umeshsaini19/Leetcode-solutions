class Solution {
public:
  
     int rec(vector<vector<int>>& matrix,int i, int j,vector<vector<int>>&dp){
        if(j<0 || j>matrix[0].size()-1){
          return 1e9;  //aise  value return krdo ki dusra apne ap min hi ho
        }
        if(i>matrix.size()-1){
            return 0;
        }
        if(dp[i][j]!=INT_MIN){
            return dp[i][j];
        }
       int a=matrix[i][j]+rec(matrix,i+1,j,dp);
       int b=matrix[i][j]+rec(matrix,i+1,j-1,dp);
       int c=matrix[i][j]+rec(matrix,i+1,j+1,dp);
       return dp[i][j]=min(a,min(b,c));
        
        
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int miner=INT_MAX;
        vector<vector<int>>dp(matrix.size(),vector<int>(matrix[0].size(),INT_MIN));
        for(int i=0;i<matrix[0].size();i++){
            miner=min(miner,rec(matrix,0,i,dp));
        }
        return miner;
    }
};