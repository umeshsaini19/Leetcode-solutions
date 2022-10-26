class Solution {
public:
  
  
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<vector<double>>dp(n+1,vector<double >(m+1,0));
        
       
        int i,j;

        for(i=0;i<=n;i++)
 dp[i][0]=1;   //jdo m zero a odo j==0 hogya recursion vale de acc te i==0 return 0 vali condition likhn di lod ni a bcz already apan dp 0 hi lai a agr -1 lai hundi fer condtion andi 
        
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(s[i-1]==t[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                    
                }
                else
                    dp[i][j]=dp[i-1][j];
            }
            
        }

        return dp[n][m];
    }
};

//isme yeh ni he ki match krge toh dono k=me se ek ek minus krdenge kyuki hme kya pta dubara se age same a jaye toh hum usko consider krna chahe esleye hum ek vari consider krlenge ek vari ni  https://www.geeksforgeeks.org/count-distinct-occurrences-as-a-subsequence/ / yeh recursion explanation