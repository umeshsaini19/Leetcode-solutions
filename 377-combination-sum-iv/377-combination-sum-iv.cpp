class Solution {
public:
    int helper(vector<int>& nums, int target, int n, vector<int> &dp) {
	
        if(target == 0) return 1;
		
	
        if(n == 0 || target < 0) return 0;
        
		
        if(dp[target] != -1)
            return dp[target];
        
	
        if(nums[n-1] <= target) {
		
            return dp[target] = helper(nums, target-nums[n-1], nums.size(), dp) + helper(nums, target, n-1, dp);
        } else { 
            return dp[target] = helper(nums, target, n-1, dp);
        }
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1, -1);
        return helper(nums, target, nums.size(), dp);
    }
};