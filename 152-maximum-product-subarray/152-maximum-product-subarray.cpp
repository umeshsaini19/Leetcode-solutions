class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
       long long start=1;
	    long long end=1;
	    long long ans=INT_MIN;
	   for(int i=0;i<n;i++){
	       start=start*nums[i];
	       end=end*nums[n-i-1];
	       ans=max(ans,max(start,end));
	       
	       if(start==0)
	       start=1;
	       if(end==0)
	       end=1;
	   } 
  return ans;
    }
};