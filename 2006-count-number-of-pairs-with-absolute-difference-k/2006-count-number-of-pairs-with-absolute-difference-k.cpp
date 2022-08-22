class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            int val1 = m[nums[i] + k];
            int val2 = m[nums[i] - k];
         
            ans += val1 + val2;
            // adding nums[i] into map
            m[nums[i]]++;
        }
        return ans;
    }
};


//thoda sa logical he like |nums[i]-nums[j]|=k  nums[i]+nums[j]=k and nums[i]-nums[j]=k mode htane ke badh 

//ab x-y=k he and x-k=y he same hi baten he esleye kiya he yeh chije