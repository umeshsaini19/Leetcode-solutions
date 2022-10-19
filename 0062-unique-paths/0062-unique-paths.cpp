class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(n, vector<int>(m, 1));

        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
        
        return dp[n-1][m-1];
    }
};

//dekh ya toh upr vala jo method he vasse krle ki pehle hi sbko one dede and fir add krta ja ya fer base cond add krde ki if i==0 || j==0 toh bhi dp[n][m]==1 krde kyuki 0th row 0th column me hmesha 1 hi path hoga toh us time pe i =0 and j=0  se cond hogi and  if me dp[i][j]==1 else me dp[i][j]=dp[i-1][j]+dp[i][j-1] eslai bcz suppose 5,5 he toh 4,5 vala path plus 5,4 vala path dono add krke ans