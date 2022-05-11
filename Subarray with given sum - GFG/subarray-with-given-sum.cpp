// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
       vector<int> res;
       long long sum=0;
       int l=0,r=0;
       res.push_back(-1);
       while(r<n){
           if(sum < s){
               sum = sum+arr[r];
               r++;
           }
           if(sum > s){
               sum = sum - arr[l];
               l++;
           }
           if(sum == s){
               res.clear();
               res.push_back(l+1);
               res.push_back(r);
               break;
           }
       }
       if(sum > s){
           while(l<n){
               sum = sum - arr[l];
               l++;
               
               if(sum == s){
                   res.clear();
                   res.push_back(l+1);
                   res.push_back(r);
                   break;
               }
           }
       }
       return res;
   
        
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends