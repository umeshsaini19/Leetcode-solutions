class Solution {
public:
    int change(int n, vector<int>& S) {
     int m=S.size();

      
       long long int dp[m+1][n+1];
         for(int i = 0; i <= m; i++)
        {
            for(int j = 0; j <= n; j++)
            {
                if(i == 0)
                {
                    dp[i][j] = 0;
                }
                 if(j == 0)
                {
                    dp[i][j] = 1;
                }
            }
        }
        
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
              
                if (S[i-1]<=j) {
                    dp[i][j] =dp[i-1][j]+ dp[i][j-S[i-1]];
                }
                else 
                dp[i][j]=dp[i-1][j];
            }
        }
        return dp[m][n];
    }

};