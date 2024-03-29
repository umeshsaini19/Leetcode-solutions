class Solution {
public:
    double myPow(double x, int n) {
        //if n is negaitve last me ans ko 1/ans krke return krdo 
       	// Brute Force Solution Time O(N) & Auxiliary Space O(N)
   
  double ans = 1.0;
  long long nn = n;
        
  if (nn < 0) nn = -1 * nn;
        while(nn){
            if(nn%2){
                ans=ans*x;
            nn=nn-1;}
            else{
                x=x*x;
                nn=nn/2;
            }
        }
        if(n<0) ans=(double)(1.0)/(double)(ans);
    return ans;    
    }
};
// }; double ans = 1.0;
//   long long nn = n;
//   if (nn < 0) nn = -1 * nn;
//   while (nn) {
//     if (nn % 2) {
//       ans = ans * x;
//       nn = nn - 1;
//     } else {
//       x = x * x;
//       nn = nn / 2;
//     }
//   }
//   if (n < 0) ans = (double)(1.0) / (double)(ans);
//   return ans;