class Solution {
public:
     int solve(vector<int>& arr,int ind){
        int prev=arr[0];
        int prev2=0;
        
        for(int i=1;i<ind;i++){
            
            
        
       
        int pick=arr[i];
        if(i>1){pick=pick+prev2;}
        
        int notpick=0+prev;
            
            int curri=max(pick,notpick);
            prev2=prev;
            prev=curri;//prev esleye return bcz last  me toh prev me jarhi uski value
        }
        
        
        return prev;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
         return solve(nums,n);
	        
	    }
    
};