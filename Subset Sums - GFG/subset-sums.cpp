// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
vector<int>v;
void rec(vector<int>&arr,int N,int i,int sum){
   
    if(i==N) {v.push_back(sum);
    return;}
    rec(arr,N,i+1,sum+arr[i]);
    rec(arr,N,i+1,sum);
    
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
      
       rec(arr,N,0,0);
       return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends