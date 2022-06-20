class Solution {
public:
    string longestPalindrome(string s) {
        
        //yeh pepcoding se kiya he
        
//         int n=s.size();
//         int dp[n][n];
//         memset(dp,0,sizeof(dp));
//         int len=0;  //yeh bta rha khtm kahan horha 
//         int start=0; //yeh btayega start kahan pe horha
//         for(int g=0;g<s.length();g++){  //yahan pe gap dekha jarha he ki charcter me gap kitna he and yeh s.length -1 tk chleha bcz 6 character he tooh 5 hi gap honge na
//             for(int i=0,j=g;j<n;j++,i++)  //har ek me loop i,gap se shuru hprhoi he and khtm sarri last column yani s.length pe hi horhi he like akela a he toh i=0 and j bhi zero yani gap 0 fir i=1 gap bhi bdega aise 
//             {
//                 if(g==0)  //agr gap zero means palindrone he hi
//                     dp[i][j]=true;
//                 else if(g==1){
//                     if(s[i]==s[j])
//                         dp[i][j]=true;
//                     else 
//                         dp[i][j]=false;
                    
//                 }
//                 else {
//                     if(s[i]==s[j] and dp[i+1][j-1]==true) dp[i][j]=true;
//                     else dp[i][j]=false;
//                 }
//                 if(dp[i][j]) //jab jab hme true mila tb tb hum log ne length calculate krli and max esleye check ni kiya bcz hmesah bdni hi he yeh toh 
//                 len=g+1;
//                 start=i;
//             }
//         }
       //     return s.substr(start,len);
    
      int n = s.size();
        int dp[n][n];
        memset(dp, 0, sizeof dp);
        
        int len = 0, start = 0;
        for (int g = 0; g < n; ++g) {
            for (int i = 0, j = g; j < n; ++i, ++j) {
                if (g == 0)
                    dp[i][j] = true;
                else if (g == 1){ if(s[i] == s[j]){
                    dp[i][j]=true;}
                else {
                    dp[i][j]=false;
                }
            }
                else
                {if(s[i] == s[j] && dp[i + 1][j - 1]==true){
                    dp[i][j] = true;
                }else{
                    dp[i][j]=false;
                }
                }
                if (dp[i][j]) {
                    len = g + 1;
                    
                    start = i;
                  
                 
                }
            }
        }
              cout<<len;
              cout<<start;
        return s.substr(start, len);
    }
};