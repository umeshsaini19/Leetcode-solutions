class Solution {
public://yeh codeix se sikha he
    int solve(int n, vector<int>&dp){
        if(n <= 1) return 1;
        if(dp[n] != -1) return dp[n];
        
        int res{};
        
        for(int i{1}; i<=n; ++i)
            res += solve(i-1, dp)*solve(n-i, dp); //yeh suing catalon no he ki har rk ko root bnne ka mauka dedo uske left vale ka leke ao i-1 krke 
        
        return dp[n] = res;
    }
    
    int numTrees(int n) {
        vector<int>dp(n+1, -1);
        return solve(n, dp);
    }
};