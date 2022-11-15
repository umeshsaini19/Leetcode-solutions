class Solution {
public:
    
    int dp[102];
    int decode(string& s, int idx, int n)
    {
        if(idx < n && s[idx] == '0') return 0;
        if(idx >= n)
            return 1;
        
        if(dp[idx] != -1) return dp[idx];
        
        int ways = 0;
        
        // Pick single
        if(s[idx] != '0') ways+= decode(s, idx+1, n);
            
        // Pick couple
        if(idx+1 < n && ((s[idx] == '1' && s[idx+1] <= '9') || (s[idx]=='2' && s[idx+1] < '7')))
           ways += decode(s, idx+2, n);
           
        return dp[idx] = ways;
    }
    
    int numDecodings(string s) {
       
        int n = s.size();
        memset(dp, -1, sizeof(dp));
        return decode(s, 0, n);
    }
};

//vasse que diff ni he aram se dekhne se smj a jayega isse pehle vale sub,ission me thode cmnd and ek soch rha hoga ki s[idx]==0 pe 0 return kyu he toh  jaise "01 " hoga toh 0 ka kuch existance ni he ab tu sochega ki 20 ka toh existemce toh smj ki hme value ni return krni he hme sirf count return krna he toh 20 ka count usne 1 leliye he and +2 krdia he pick couple ke andr