class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>snum=nums;
        unordered_map<int,int>mp;
        sort(snum.begin(),snum.end());
        for(int i=snum.size()-1;i>=0;i--){
            mp[snum[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=mp[nums[i]];
        }
        return nums;
    }
};

//self explanatory code