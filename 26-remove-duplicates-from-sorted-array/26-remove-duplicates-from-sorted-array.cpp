class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[count]!=nums[i])  //agr dono unequal he toh same value same pe chd rhi he and agr dono equal he toh agli value pechle pe chd rhi he 
                count++;
            
            nums[count]=nums[i];
         
        }return count+1;
    }
};
