class Solution {
public:
    int findPeakElement(vector<int>& nums) {
           
        if(nums.size() == 1) return 0; // single element
        
        int n = nums.size();
        
		// check if 0th/n-1th index is the peak element
        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;
		
		// search in the remaining array
        int start = 1;
        int end = n-2;
        
        while(start <= end) {
            int mid = start + (end - start)/2;
            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) return mid;
            else if(nums[mid] < nums[mid-1]) end = mid - 1;
            else if(nums[mid] < nums[mid+1]) start = mid + 1;
        }
        return -1; // dummy return statement
    }
};

//jaise inoput 1 2 3 1 he toh dekh  jaise 2 pe agye 2 toh ni he ab hum 1 vali side jaye ya 3 vali toh dekhne se pta lgra he 1 ki side toh ni jayenge ki kyuki voh peak ho hi ni skta uske kyuki 2 pehle hi usse bda hi pr 3 ki side possibiluity he ho skte he esleye udr jate he hum log