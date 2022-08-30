class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
      int prod=1;
        int count=0;
        int start=0;
        for(int end=0;end<nums.size();end++){
            prod*=nums[end];
            while(prod >= k and start<nums.size()){
             prod = prod/nums[start];
                start++;
            }
            if(prod<k)
                count+=end-start+1;
        }
         return count;
    }
   
};
//      int start = 0;
//         long prod = 1;
//         int count =0; // count of subarray prod  less than k
//         for(int end =0; end< nums.size(); end++){
//             prod *= nums[end];
    
//            while(prod >= k && start < nums.size()){
//                prod = prod/nums[start];// divide product by nums at start pointer t reduce the prod
//                 start++;//move start pointer because no longer nums at start can give us prod < k
//               }
//            if(prod < k)
//             count += end - start +1;
//       }
//     return count;
//     }
// };


// end = 0;
// count += 0 - 0 + 1 = 1 + count = 1

// end = 1;
// count += 1 - 0 + 1 = 2 + count = 3

// end = 2;
// count += 2 - 0 + 1 = 3 + count = 6