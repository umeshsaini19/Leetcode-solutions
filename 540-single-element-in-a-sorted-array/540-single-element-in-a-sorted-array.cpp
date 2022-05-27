class Solution {
public:
    //best explanation
   // https://leetcode.com/problems/single-element-in-a-sorted-array/discuss/1587251/C%2B%2B-Easy-and-Concise-O(logn)-Solution-(W-Explanation)
    int singleNonDuplicate(vector<int>& nums) {
        int l=0;
         if(nums.size()==1)
            return nums[0];
        int h=nums.size()-1;
            while(l<=h){
            int mid=l+(h-l)/2;//mid ke dono cases dekhne he even vala bhi odd vala bhi 
        if(mid%2==0){  
            if(nums[mid]==nums[mid+1])
                l=mid+1;
            else{
                h=mid-1;
            }
          
            
        }
                else{
                    if(nums[mid]==nums[mid-1]){
                    l=mid+1;    
                    }
                       else {
                           h=mid-1;;
                       }
                
                       
                       }
            }
        return nums[l];
    }
                       
};