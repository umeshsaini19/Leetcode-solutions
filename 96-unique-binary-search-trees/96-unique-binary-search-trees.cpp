class Solution {
public://yeh codeix se sikha he
 
    
    int numTrees(int n) {
       vector<int> dp(n+1);
        dp[0] = 1, dp[1] = 1;
        for (int i = 2; i <= n; i++){
            for (int j = 1; j <= i; j++){
                dp[i] += dp[i-j] * dp[j-1];   //jaise 1 nikalan ahe toh 0*1 vali vslue mu;ipy kro
     ;}
        }
        return dp[n];
    
    }
};

//catalon no ka concept hota he Cn=C0*Cn-1+C1*Cn-2   aise continue krte jao and ans a jayega 