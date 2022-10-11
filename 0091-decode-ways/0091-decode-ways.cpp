class Solution {
public:
  
    int dp[102];
    int solve(string& s, int idx,int n)
    {
        int ways=0;
        if(idx<n and s[idx]=='0' ) return 0;   //jaise single index pe 0 ayega toh voh koi kam ka ni he bcz voh result me partiipate ni krega
        if(idx>=n) return 1; //hum last index me punch gye recursion tree se toh ab 1 result agya he //chahe 1 1 element lelo ya 1 2 aise yeh jaise h recursion tree me jtini bari last me punche utne me hogya kam
            if(dp[idx]!=-1) return dp[idx];
        
        if(dp[idx]!='0') ways+=solve(s,idx+1,n);
        
        // Pick couple
        if(idx+1 < n && ((s[idx] == '1' && s[idx+1] <= '9') || (s[idx]=='2' && s[idx+1] < '7')))
           ways += solve(s, idx+2, n);
        
        return dp[idx]=ways;
        
    }   
    
    int numDecodings(string s) {
       int n=s.size();
        memset(dp,-1,sizeof(dp));
        return solve(s,0,n);
    }
};