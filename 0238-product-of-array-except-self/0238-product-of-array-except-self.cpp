class Solution {
public:
      vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> ans(n);
        
        ans[n - 1] = 1; // ans array used as right product array
        
        for(int i = n - 2; i >= 0; i--){
            ans[i] = nums[i + 1] * ans[i + 1];
        }
        
        int leftProd = 1;
        for(int i = 0; i < n; i++){
            ans[i] = leftProd * ans[i];
            leftProd = leftProd * nums[i];
        }
        
        return ans;
    }
};

//jo isse pehle vali approach he usme right and legt 2 array use ho rhe eh toh hum sirf right vala vector maintain krlete he front se jaise first ka dekh rhe he toh jo right ki value he multiplye with first jo right array me he same for jaise hme second ka krna he toh uske right tak ki value array se uthalop and  left ki value direct multiolye krta aja first ko  multiply hi krna he right ke sath andANS A JAYEGA 