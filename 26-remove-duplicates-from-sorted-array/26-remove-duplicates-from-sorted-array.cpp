class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[count]!=nums[i]){  //agr dono unequal he toh same value same pe chd rhi he and agr dono equal he toh agli value pechle pe chd rhi he 
                count++;
            
            nums[count]=nums[i]; }
         
        }return count+1;
    }
};
  //agr hum dono same he toh count ni bdega ek ke upr aek a jayega and agr hum dono same ni he toh count bdaodo and same ke same same a jayega 

// 1 1 2 2 3 3 3   j++ =0
//                 1 2 2 3 3 
//     1 1 2   =0;
// nums[0]=nums[1];
    