class Solution {
public:
    
    //peche se age ki trf bdh rhe he using recursion 
    int solve(vector<int>& nums,int ind, vector<int>&dp){
        // if(ind==0) return nums[0];  jaise yeh he same like tabulation me agr dp[0] he toh dp[0]=nums[0];
        dp[0]=nums[0];
        for(int i=1;i<ind;i++){
            int pick=nums[i];
            
            if(i>1){
                pick=pick+dp[i-2];
            }
         int not_pick=0+dp[i-1];
            dp[i]=max(pick,not_pick);
        }
        return dp[ind-1];
        
        
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
         return solve(nums,n,dp);
	        
	    }
    
};