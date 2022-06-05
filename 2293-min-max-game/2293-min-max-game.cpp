class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        // int N = nums.size();
        //  while(N!=1){
        //      N=N/2;
        //      for(int i=0;i<N;i++){
        //          nums[i]=(i%2==0)?min(nums[2*i],nums[2*i+1]):max(nums[2*i],nums[2*i+1]);
        //      }
        //  }        
        // return nums[0];
        

//        while (N!=1) {
//              cout<<1544;
//             N/=2;
//             for (int i = 0; i < N; ++i)
//                 nums[i] = (i%2 == 0) ? min(nums[2*i], nums[2*i+1]) : max(nums[2*i], nums[2*i+1]);
        
//         return nums[0];
     int n=nums.size(); 
        if(n==1){ 
            return nums[0]; 
        } 
        vector<int> newNUM(n/2,0);
        for(int i=0;i<n/2;i++){ 
            if(i%2==0){ 
                newNUM[i]=min(nums[2 * i], nums[2 * i + 1]); 
            } 
            else{ 
              newNUM[i]=max(nums[2 * i], nums[2 * i + 1]); 
            } 
        } 
         
        int ans=minMaxGame(newNUM); 
        return ans; 
    }
    
};