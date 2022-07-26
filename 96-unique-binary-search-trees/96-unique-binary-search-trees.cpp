class Solution {
public://yeh codeix se sikha he
 
    int solve(int n, vector<int>&dp){
        if(n <= 1) return 1;
        if(dp[n] != -1) return dp[n];
        
        int res{};
        
        for(int i=1; i<=n; ++i)
            res += solve(i-1, dp)*solve(n-i, dp);   //  1 2 3 4 5 start se leke i-1 tk ka btado and i+1 yani root se leke last tk ka btado jo bhi ans ayega use res me add krdo
        
        return dp[n] = res;
    }
    
    int numTrees(int n) {
        vector<int>dp(n+1, -1);
        return solve(n, dp);
    }
};
//catalon no ka concept hota he Cn=C0*Cn-1+C1*Cn-2   aise continue krte jao and ans a jayega 