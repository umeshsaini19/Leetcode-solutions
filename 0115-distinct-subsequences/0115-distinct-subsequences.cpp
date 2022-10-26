class Solution {
public:
  
    int solve(string s, string t,int n,int m,  vector<vector<int>>&dp){
        if(n==0 and m==0)
            return 1;
        if(n==0) return 0;
        if(m==0) return 1;
        if(dp[n][m]!=-1) return dp[n][m];
        if(s[n-1]==t[m-1]) {
            return dp[n][m]=solve(s,t,n-1,m-1,dp)+solve(s,t,n-1,m,dp);
        }
        return dp[n][m]=solve(s,t,n-1,m,dp);
    }
    int numDistinct(string s, string t) {
        int n=s.length();
     
        int m=t.length();
           vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(s,t,n,m,dp);
    }
};

//isme yeh ni he ki match krge toh dono k=me se ek ek minus krdenge kyuki hme kya pta dubara se age same a jaye toh hum usko consider krna chahe esleye hum ek vari consider krlenge ek vari ni  https://www.geeksforgeeks.org/count-distinct-occurrences-as-a-subsequence/ / yeh recursion explanation