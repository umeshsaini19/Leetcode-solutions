class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //intuition of this code amazing one
  //      https://leetcode.com/problems/maximum-product-subarray/discuss/1608800/C%2B%2B-or-Discussion-in-detail-or-Easy-to-understand
        int n=nums.size();
       long long start=1;
	    long long end=1;
	    long long ans=INT_MIN;
	   for(int i=0;i<n;i++){
           //age and peche dono side se traverse kr rhe he 
	       start=start*nums[i];
           cout<<start<<" ";
	       end=end*nums[n-i-1];
           cout<<end<<" ";
	       ans=max(ans,max(start,end));
           cout<<ans<<" ";
	       
	       if(start==0)
	       start=1;
	       if(end==0)
	       end=1;
	   } 
  return ans;
    }
};

// If the count is odd, then we would want to exclude one -ve number from our product, so that the product gets maximised. So, now the question is, which -ve number to exclude? Example ---> arr={-2,-3,-1,-4,-5} which number should be excluded ? On observing it , we should get one fact clear, that the number which is going to get ignored is either going to be the first one or the last one.