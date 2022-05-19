class Solution {
public:  //agr sirf comment vala part hta denge toh second method
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
                maxi=max(count,maxi);  //yeh toh ek bari compare krne ke liye
            
                  count=0;
                   }
           }
        return max(count,maxi);     //yahan pe dubara esleye bcz manlo 0 aye hi ek bari badh me aye hi na fir else me toh jayenge ni toh previous max se compare krna he na 
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