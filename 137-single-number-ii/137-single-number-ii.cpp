class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ones = 0;
        int twos = 0;
        
        for ( int i : nums ) {
            ones = (ones ^ i) & (~twos);
            twos = (twos ^ i) & (~ones);
        }
        
        return ones;
    }
};

// ones - it will store the elements that appear once
// twos - it will be storing the elements that are repeating twice
// Now a dry run using the example: nums=[2,2,2,3]
// here we have taken ones and twos initial values to be 0
// now ones = (00^10)&(11) = 10 & 11 = 10 = 2 ( you can see that since 2 has appeared only once it is stored in ones)
// twos = (00^10)&(01) = 10 & 01 = 00 = 0

// ones = (10^10)&(11) = 00 & 11 = 00 = 0
// twos = (00^10)&(11) = 10 & 11 = 10 = 2 ( you can see that since 2 has appeared twice so it is stored in twos now)

// ones = (00^10)&(01) = 10 & 01 = 00 = 0
// twos = (10^10)&(11) = 00 & 11 = 00 = 0

// ones = (00^11)&(11) = 11 & 11 = 11 = 3
// twos = (00^11)&(00) = 11 & 00 = 00 = 0

// so now ones will be returned which is 3. So 3 here is the non-repeating element in the given array.
// (Remember: There is no variable that stores the value of any element which occurs thrice.)