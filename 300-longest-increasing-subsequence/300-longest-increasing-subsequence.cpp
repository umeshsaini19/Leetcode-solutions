class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1);
        int ans=1;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    dp[i]=max(dp[i],1+dp[j]);         //yeh max esleye manlo 5,4,11,16 he and 5 ,4,11,16 sabki original dp abhi 1 hi he jaise manlo 16 ki bari ai toh 11 usse pehle process ho chuka he and 11 ko 2 mila huya he and jab 16 ki bari ai toh 16 ki dp 5,16 se 2 hogi and same 4,16 se 2 and jab 11 ki bari ai 16 ki toh 4.11.16 aise consider huya and 11 ki vajah se 16 ko 3 milega esleye har bari previous me bhi 1 add krke age bdhna pdega tbhi pta lgega
                    ans=max(ans,dp[i]);
                }
            }
        }
        return ans;
    }
};

// int ans = 1, n = size(nums);
//         vector<int> dp(n, 1);
//         for(int i = 0; i < n; i++) 
//             for(int j = 0; j < i; j++) 
//                 if(nums[i] > nums[j]) 
// 				    dp[i] = max(dp[i], dp[j] + 1), ans = max(ans, dp[i]);
//         return ans;