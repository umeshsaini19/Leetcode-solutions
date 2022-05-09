// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
      long long int countmerge(long long int arr[],long long int l,long long int m,long long int r)
    {
        long long int n1 = m-l+1;
        long long int n2 = r-m;
        long long int a[n1];
        long long int b[n2];
        for(long long int i = 0;i<n1;i++)
        {
            a[i] = arr[i+l];
        }
        for(long long int i = 0;i<n2;i++)
        {
            b[i]=arr[m+1+i];
        }
        long long int i = 0,j = 0,k=l,res=0;
        while(i<n1 && j<n2)
        {
            if(a[i]<=b[j])
            {
                arr[k]=a[i];
                i++;
            }
            else
            {
                arr[k]=b[j];
                j++;
                res = res + (n1 - i);
            }
            k++;
        }
        while(i<n1)
        {
            arr[k]=a[i];
            i++;
            k++;
        }
        while(j<n2)
        {
            arr[k]=b[j];
            j++;
            k++;
        }
        return res;
    }
    long long int countinversion(long long arr[],long long int l,long long int r)
    {
        long long int counter=0;
        if(l<r)
        {
            long long int m = l + (r-l)/2;
            counter  += countinversion(arr,l,m);  //left half me kitne inversion he 
            counter  += countinversion(arr,m+1,r);//right half me kitne inversion he
            counter  += countmerge(arr,l,m,r);   //dona ko merge krne pe apas me kitne inversion he 
        }
        return counter;
    }
    long long int inversionCount(long long arr[], long long N)
    {
         return countinversion(arr,0,N-1);
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends