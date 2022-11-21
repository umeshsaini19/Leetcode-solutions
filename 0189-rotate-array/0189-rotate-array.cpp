class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        
        
        
        //   Step 1: reverse the whole array.
// Step 2: reverse the elements from starting of the array till the kth element.
// Step 3: reverse the elements from the kth element till the end of the array.

// For example:
// let the array be arr = [1,2,3,4,5] and k = 2
// therefore the result array should be arr = [4,5,1,2,3]

// Step 1: reverse the whole array
// arr = [5,4,3,2,1]
// Step 2: reverse from 0 to k
// arr = [4,5,3,2,1]
// Step 3: reverse from k to n
// arr = [4,5,1,2,3]

        
		//remove redundant k values  and shorten k
        k = k % nums.size();
        
		//reverse the array from starting to end
        reverse(nums.begin(), nums.end());
		
		//reverse from starting till kth element
        reverse(nums.begin(), nums.begin()+k);
		
		//reverse from kth till last element
        reverse(nums.begin()+k, nums.end());
    }
};