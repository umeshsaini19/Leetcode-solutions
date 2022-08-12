class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int totalsum=nums.size()*(nums.size()+1)/2;
        int sum=0;
        for(auto it:nums){
            sum+=it;
        }
        return totalsum-sum;
        }
};