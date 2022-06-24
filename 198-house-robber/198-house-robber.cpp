class Solution {
public:
    
 
    
    int rob(vector<int>& nums) {
      int prev2=nums[0]; //jaise dp me tha starting me yeh krdo;
        int prev=0;
        for(int i=1;i<nums.size();i++){
            int pick=nums[i];  
            
            if(i>1) {
               pick=pick+prev;   //dp[i-2]=prev;   //0 prev2 me daldia toh jab 2 ayega toh 
            }
            int not_pick=0+prev2;   //dp[i-1]= prev2;
            
           int  curri=max(pick,not_pick);
          //jruri ni he ki ans hmesha pick hi de toh pick ko raja na manna har bari value bdl rhi he pick ke liye yeh last step most imp he 
            prev=prev2;
            prev2=curri;
        }
        return prev2;
	        
	    }
    
};