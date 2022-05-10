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
        unordered_map<int,int>mpp;
       int maxi = 0;
       int sum = 0;
       for(int i = 0;i<n;i++){
           sum += A[i];
           if(sum == 0){
               maxi = i+1; //storing longestSubarray
           }
           else{
               if(mpp.find(sum) != mpp.end()){ //if there is prefix of element in hashap
                   maxi = max(maxi, i-mpp[sum]);   //get that index and get the length
               }
               else{
                   mpp[sum] = i;
               }
           }
           
       }
       return maxi;
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