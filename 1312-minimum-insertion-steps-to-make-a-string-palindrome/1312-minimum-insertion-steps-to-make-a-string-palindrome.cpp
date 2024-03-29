class Solution {
public:
   
int solve(string a,string b,int n,int m){
    int dp[n+1][m+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
        }
    }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(a[i-1]==b[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
    

   int minInsertions(string str) {
        int n=str.length();
    string str1=str;
    reverse(str1.begin(),str1.end());
    int lcs=solve(str,str1,n,n);
    return n-lcs;
    }
    
    //aur yeh lps =lcs(s,rever of(s))  toh smj rhe ho na lcs likha he means lps hi he 
  
    
    // min insertion  and deletion is total length -lcs   dono same hi toh honge jitne faltu he ya toh utne hi add krde ya fer utne hi remove krdo 
    
};