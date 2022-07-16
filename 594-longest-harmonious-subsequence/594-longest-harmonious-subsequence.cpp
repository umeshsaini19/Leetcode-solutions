class Solution {
public:
    int findLHS(vector<int>& nums) {
    
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans=0;
        for(auto it:mp){
            if(mp.find(it.first-1)!=mp.end()){  //3-1 2 milgya toh 
                ans=max(ans,it.second+mp[it.first-1]);
            }
        }
        return ans;
    }
};

//dekh maine pehle sarri values map me daldi uske badh map ko iterate kiya and check ki usse ek kam value present he map me hnji he toh jo value dali uska count+usse ek kam ka count nikal lo and aise sabka nikal se max a jayega 