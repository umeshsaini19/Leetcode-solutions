// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int m, int n, int k){
    
    // if(n>m){
    // return kthElement( arr2,  arr1,  m,  n,  k);
    // }
    // int low=max(0,k-n);
    // int high=min(m,k);
    // while(low<=high){
    //     int cut1=low+(high-low)/2;
    //     int cut2=k-cut1;
    //     int l1,l2=INT_MIN;
    //     int r1,r2=INT_MAX;
    //      l1=arr1[cut1-1];
    //      l2=arr2[cut2-1];
    //      r1=arr1[cut1];
    //      r2=arr2[cut2];
    //      if(l1<=r2 && l2<=r1){
    //          return max(l1,l2);
    //      }
    //      else if(l1>r2){
    //          high=cut1-1;
    //      }
    //      else low=cut1+1;
    // }
    // // return 1;
    
   int sorted1[m + n];
	int i = 0, j = 0, d = 0;
	while (i < m && j < n)
	{
		if (arr1[i] < arr2[j])
			sorted1[d++] = arr1[i++];
		else
			sorted1[d++] = arr2[j++];
	}
	while (i < m)
		sorted1[d++] = arr1[i++];
	while (j < n)
		sorted1[d++] = arr2[j++];
	return sorted1[k - 1];
}

};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends