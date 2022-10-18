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