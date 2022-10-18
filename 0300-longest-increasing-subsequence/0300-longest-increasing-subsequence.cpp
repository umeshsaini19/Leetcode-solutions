class Solution {
public:
 int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
		
		// Space Optimized
        vector<int> dp(n,1);
        int maxi = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++)
            {
                if(nums[i]>nums[j]) dp[i] = max(dp[i], 1 + dp[j]);
               
            }
         maxi = max(maxi, dp[i]); //pura fill hone ke badh nikal lo ans max vala
        }
        return maxi;
		}
	};


//hmne ek pehle likha he submission me usme explanain he vasse iske yahi he ki jaise shuru se us particulare i tak kitne subsequence increasing vale he and sabka max lelo 