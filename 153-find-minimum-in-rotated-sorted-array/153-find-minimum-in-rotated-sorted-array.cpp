class Solution {
public:
    int findMin(vector<int>& nums) {
        int r=nums.size()-1,mid,l=0;
        if(nums.size()==1) return nums[0];
        while(l<=r){
            mid=l+(r-l)/2;
            if(nums[l]<=nums[r]) return nums[l];
            else {
                if(nums[mid]>=nums[r]) l=mid+1;
                else r=mid;
            
        }
        }
            return nums[l];
    }
};