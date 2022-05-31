// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
     vector<long long >left,right;
     int pseudo_index1=-1;
      int width[n];
     int pseduo_index2=n;
     stack<pair<long long ,long long >>s1,s2;
     for(int i=0;i<n;i++){
         if(s1.size()==0){
         left.push_back(pseudo_index1);}
         else if(s1.size()>0 && s1.top().first<arr[i]){
            left.push_back(s1.top().second);      }
     
     else if(s1.size()>0 && s1.top().first>=arr[i]){
         while(s1.size()>0 && s1.top().first>=arr[i]){
         s1.pop();
     }
     if(s1.size()==0)
     {
         left.push_back(pseudo_index1);
     }
     else{
         left.push_back(s1.top().second);
     }
    }
    s1.push({arr[i],i});
    }
    
    
    for(int i=n-1;i>=0;i--){
         if(s2.size()==0){
         right.push_back(pseduo_index2);}
         else if(s2.size()>0 && s2.top().first<arr[i]){
            right.push_back(s2.top().second)   ;      }
     
     else if(s2.size()>0 && s2.top().first>=arr[i]){
         while(s2.size()>0 && s2.top().first>=arr[i]){
         s2.pop();
     }
     if(s2.size()==0)
     {
         right.push_back(pseduo_index2);
     }
     else{
         right.push_back(s2.top().second);
     }
    }
    s2.push({arr[i],i});
    }
    reverse(right.begin(),right.end());
    
    for(int i=0;i<left.size();i++){
        width[i]=right[i]-left[i]-1;
    }
    
  long long m=INT_MIN;
    for (long long i=0;i<n;i++)
    {
      m=max(m,(width[i])*arr[i]); // taking max after finding area
    }
    return m;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends