class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
         
        int n = nums.size();
		
		// Space Optimized
        vector<int> dp(n,1),count(n,1);
        int maxi = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++)
            {
                if(nums[i]>nums[j]){
                    if(dp[i]<1+dp[j]){
                        dp[i]=1+dp[j];
                        count[i]=count[j];
                    }
               else if(dp[i]==1+dp[j]){
                   count[i]+=count[j];
               }
            }
            }
         maxi = max(maxi, dp[i]); //pura fill hone ke badh nikal lo ans max vala
        }
        
        int cot=0;
        for(int i=0;i<n;i++){
          if(dp[i]==maxi)
              cot+=count[i];
        }
        return cot;
	

    }
};


//isme main he ki count dekhna he toh 
// array:  1 5 4 3 2 6 7 10 8 9 
// length: 1 2 2 2 2 3 4 5 5 6 
// count:  1 1 1 1 1 4 4 4 4 4

//lis dekhna he toh hmne pehle sbko length bhi 1 di thi and sabka count bhi 1 self vala fir 5 pe gye jake dekha 5 bda he 4 se possibiity he count bdne ki toh check kiya 5 pe value 1+dp[1] se choti he na toh pta lga hnji chpti he tph replace krdi and count replace krdia jab value less than nikli ab jaise hi 6 pe punche pehle dikha 1,6 toh count hgya 1 and baki length 2 uske baadh jaise hi five aya uski length 3 and 6 ki length 22toh aise 6 ki length me update huya 1+2=3 and uske baadh count hogya 6 ka five vala rep;ace yani same 1 iske baadh jaise hi hum 4 pe aye toh check kiya 2+1=3 and  6 ki length bhi 6 pehli bari == hit huya toh count[i]yani 4 ka count 1= count 6 2+1=3 hogya aise hoga maine kam 