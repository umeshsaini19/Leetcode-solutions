class Solution {
public:
    int mySqrt(int x) {
        
       int  l=1, r=x,ans;
      
        while(l<=r){
            long long  mid = l+(r-l)/2;
            
            
            if(mid* mid ==x) return mid;
            if(mid * mid < x){
                ans=mid;
                l= mid+1;
            }else{
                r = mid-1;
            }
            
        } 
        
        
        return ans;
        
        //brute force o(n)  vali 
//         int mySqrt(int x) {
//       long long i=0;
//       while(i*i<=x)
//          i++;
//          return i-1;
     
    }
};


//jaise na 16 he toh hum 1 se shuru krenge 1*1 <=16 ans =1 aise krte krte last executed input hogi 4 and uske bad kuch ni ayeha aise and in the end return jo ans me ayega 