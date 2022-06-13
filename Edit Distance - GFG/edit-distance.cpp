// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
 int editDistanceUtil(string& S1, string& S2, int n, int m){
    int dp[n+1][m+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0) dp[i][j]=j;//jitne jada j honge utne steps chaoye extra i me tbhhi equals to j
            if(j==0) dp[i][j]=i;//same for i
        }
    }
        
  for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
        
    if(S1[i-1]==S2[j-1]){
        dp[i][j]=dp[i-1][j-1];
        
    }
    else {
        dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
    }
        }
  }
    return dp[n][m];}
    int editDistance(string s, string t) {
       int n=s.size();
       int m=t.size();
       return  editDistanceUtil(s,t,n,m);
       
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends