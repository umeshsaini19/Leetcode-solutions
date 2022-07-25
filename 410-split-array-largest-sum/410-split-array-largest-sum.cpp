class Solution {
public://like capacity to ship packages ya fir books allocation vala sab same he yeh vale
      
   int splitArray(vector<int>& nums, int m) {
        int start=INT_MIN;
        int end=0;
        for(int n:nums){
            start=max(n,start);
            end+=n;
        }
        
        int mid,ans;
        while(start<=end){
            mid=start+(end-start)/2;
            if(isPossible(nums,mid,m)){
                end=mid-1;
                ans=mid;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
    
    bool isPossible(vector<int>&n,int mid,int m){
        int sum=0,count=1;
        
       for(int i=0;i<n.size();i++){
           sum+=n[i];
           if(sum>mid){
               count++;
               sum=n[i];
           }
           if(count>m) return false;
       }
        return true;
    }
};