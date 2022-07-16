class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans;
        for(auto it:mp){
            if(it.second==nums.size()/2){
                ans=it.first;
            }
        }
        return ans;
    }
};