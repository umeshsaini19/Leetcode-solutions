class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==1){
               count++;
           //     count++;
           // if(maxi<count){          //ek toh yeh sol ki one jaise jaise ate jaye count btade jao and maxi dekhte jao 
           //     maxi=count;
           // }}
           }
               else {
                maxi=max(count,maxi);
            
                  count=0;
                   }
           }
        return max(count,maxi);
    }
};
// int maximum = 0,greed = 0;
// for(int i =0;i < nums.size();i++)
// {
// if(nums[i] == 1)
// {
// greed++;
// if(maximum < greed)
// {
// maximum = greed;
// }
// }
// else
// {
// greed = 0;
// }
// }
// return maximum;
// }