class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem==0 and i>0) return true;
            if(mp.find(rem)!=mp.end()){
                if(i-mp[rem]>=2)
                    return true;
            }
            else {
                mp[rem]=i;
            }
        }
        return false;
    }
};