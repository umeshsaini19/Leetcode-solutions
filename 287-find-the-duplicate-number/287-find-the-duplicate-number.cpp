class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       // sort(nums.begin(),nums.end());
       //  for(int i=1;i<nums.size();i++){
       //      if(nums[i]==nums[i-1])
       //          return nums[i];
       //  }return -1;
        
    
      for(int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            
            // mark as visited
            nums[index] *= -1;
            // incase of duplicate, this will become +ve 
            if(nums[index] > 0)
                return abs(nums[i]);
        }    
        return -1;
    }
};
// array ko traverse krte jao jo value ayegi array me usme se one subtract krke uski value -1 dedenge and agr  pehle se hi koi value 
// minus hovegi toh voh value jiske krke minus hoi thi voh ans hoga
//jo us index pe value he usko negative krdia yeh jma hi simple logic he kuch v scheme lg skti he iske adr