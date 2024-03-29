class Solution {
public:

    int findLength(vector<int>& S1, vector<int>& S2) {
      int n=S1.size();
        int m=S2.size();
       int dp[n+1][m+1];
       for(int i=0;i<n+1;i++){
           for(int j=0;j<m+1;j++){
               if(i==0||j==0)
               dp[i][j]=0;
               
           }
       }
       for(int i=1;i<n+1;i++){
           for(int j=1;j<m+1;j++){
               if(S1[i-1]==S2[j-1]){
                   dp[i][j]=dp[i-1][j-1]+1;
               }
               else 
               dp[i][j]=0;
           }
       }
       int maxi=INT_MIN;
       for(int i=0;i<n+1;i++){
           for(int j=0;j<m+1;j++){
               maxi=max(maxi,dp[i][j]);
           }
       }return maxi;

    }
};