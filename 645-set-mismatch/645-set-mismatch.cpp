class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
      for(auto it:mp){
          if(it.second==2) v.push_back(it.first);
      }
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==0)
                v.push_back(i);
        }
        
        return v;
    }
};