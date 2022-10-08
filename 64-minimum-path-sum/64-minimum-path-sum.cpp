class Solution
{
public:
    int minPathSum(vector<vector<int>>& grid)
    {
        int m = grid.size(), n = grid[0].size(), down, right;
        vector<vector<int>> dp(m,vector<int>(n,-1));
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                down = right = 1000; // Random large number  //yeh esleye he ki koi faltu ka add na ho jaye jaise par krte hi voh vala case failed min me voh ayega hi ni
                if(i==0 && j==0)
                    dp[i][j] = grid[0][0];
                else
                {
                    if(i>0){
                        down = grid[i][j] + dp[i-1][j];
                         cout<<down<<"d ";}
                    if(j>0){
                        right = grid[i][j] + dp[i][j-1];
                    cout<<right<<"r ";}
                    dp[i][j] = min(down,right);
                }
            }
        }
        return dp[m-1][n-1];
    }
};