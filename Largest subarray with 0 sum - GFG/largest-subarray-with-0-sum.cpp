// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int>mp;
        int maxi=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+A[i];
            if(sum==0)
            maxi=i+1;                 //agr sum 0 milgya means usse pehle kahin 0 hoga fir voh value duabara ai he 
            else{
                
             if(mp.find(sum)!=mp.end()){   //agr voh value dubara agyi he toh mtlb pehle tha kuch aur
                 maxi=max(maxi,i-mp[sum]);  //hum else me sum. o,1,2, aise derhe he ek hisab se index so that i-0,1,2 aise nikle 
             }
             else mp[sum]=i;   //  sum ke sath 0,1,2 ,3,4 aise dehre he 
             
            }  
        }return maxi;
    //     unordered_map<int,int>mpp;
    //   int maxi = 0;
    //   int sum = 0;
    //   for(int i = 0;i<n;i++){
    //       sum += A[i];
    //       if(sum == 0){
    //           maxi = i+1; //storing longestSubarray
    //       }
    //       else{
    //           if(mpp.find(sum) != mpp.end()){ //if there is prefix of element in hashap
    //               maxi = max(maxi, i-mpp[sum]);   //get that index and get the length
    //           }
    //           else{
    //               mpp[sum] = i;
    //           }
    //       }
           
    //   }
    //   return maxi;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends