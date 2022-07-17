class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
         for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>maxh;
        for(auto it:mp){
            maxh.push({-it.second,it.first});
        }
        vector<int>ans;
        while(maxh.size()>0){
            int x=maxh.top().first;  
            for(int i=0;i<abs(x);i++){
                ans.push_back(maxh.top().second);
            }
            maxh.pop();
        }
        return ans;
    }
};
//yahi logic he ki max heap ko min bnana ho toh element negaive krkr dealdo and nikalte time unko positive krdo dubara and map ka second and prirority queue ka first he align baki aditya verma bhaiy is best