class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[count]!=nums[i])
                count++;
            nums[count]=nums[i];
         
        }return count+1;
    }
};

// int left = 0;
//         for(int right =1; right< nums.size(); right++){
//            if(nums[left] != nums[right])
//                left++;
//                nums[left] = nums[right];
//            }
//     return left+1;