class Solution {
public:
 int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        vector<vector<int>>dp(m, vector<int>(n, 0));
        
        //filling 0th row
        for(int i = 0; i < n; i++){
            if(obstacleGrid[0][i] == 1) break;
            dp[0][i] = 1;
        }
        
        //filling 0th column
         for(int i = 0; i < m; i++){
            if(obstacleGrid[i][0] == 1)  break;   //else ki jaise hi one agya first row ya first column toh chance hi ni ki frst row se usse age ja payenge hum log
            dp[i][0] = 1;
        }
        
        //filling rest of the dp array
        for(int i = 1; i < m; i++)
            for(int j = 1; j < n; j++){
                if(obstacleGrid[i][j] == 1) continue;
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        return dp[m-1][n-1];
    }
};

//jo pehli row na dpehla colm he bs voh hum apne dimag se bhr skte he else sbke liye hme plus minus krna pdega