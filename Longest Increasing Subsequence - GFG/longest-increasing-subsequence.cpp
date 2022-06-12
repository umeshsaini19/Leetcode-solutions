// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        vector<int>temp;
        temp.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i]>temp.back()){
                temp.push_back(a[i]);
            }
            else{
                int ind=lower_bound(temp.begin(),temp.end(),a[i])-temp.begin();//yeh return krega ki jo element he uske just next bdi vali value like 5,4 toh jaise hi lower bound me 4 gya toh isne 5 ka index yani 0 retun krdena toh value usme a jayegi
              
                temp[ind]=a[i];
            }
        }return temp.size();
        }
    // 5,4,11,11,1,-1,8,16
    // 5 
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends