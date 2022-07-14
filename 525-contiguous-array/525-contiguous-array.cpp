class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       for(int i=0;i<nums.size();i++){
           if(nums[i]==0){
               nums[i]=-1;
           }
       }
        int n=nums.size();
     unordered_map<int,int>mp;
        mp.insert({0,-1});
        
        int sum=0,fans=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mp.find(sum)==mp.end()){
                mp.insert({sum,i}); //pehli bari ayai he push krdo 
            }
            else fans=max(fans,i-mp[sum]);    //pehle aya huya he value nikal lao 
        }
        
        return fans;
    }
};