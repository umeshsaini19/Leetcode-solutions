class Solution {
public:
   int fib(int n) {
        int ans[n+2];   //yeh ab n+2 elese kyuki edge case me input 0 ho skte he hum neche decalre kr rhe he arr[0]=0 and arr[1]=1 and agr 0 agya and n+1 huya toh 0+1 hi huya and neche vala kam ni krega and error dega esleye 
        ans[0]=0;
        ans[1]=1;
        
        for(int i=2; i<=n; i++)
            ans[i]=ans[i-1]+ans[i-2];
        
        return ans[n];}
};