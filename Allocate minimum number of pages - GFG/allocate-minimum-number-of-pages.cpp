// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isPossible(int barrier, int A[], int N, int M)
    {
        int pages=0,student=1;
        
        for(int i=0;i<N;i++){
            if(A[i]>barrier) return false;
            if(pages+A[i]>barrier){
                student+=1;
                pages=0;
                pages+=A[i];
            }
            else{
                pages+=A[i];
            }
        }
        if(student>M) return false;
        else return true;}
    //     int pages=0, students=1 ;
    //     for(int i=0 ; i<N ; i++)
    //     {
    //         if(barrier<A[i]) return false ;
    //         if(pages+A[i]>barrier)
    //         {
    //             students++ ;
    //             pages=0 ;
    //             pages+=A[i] ;
    //         }
    //         else
    //             pages+=A[i] ;
    //     }
        
    //     return students>M ? false : true ;
    // }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        int ans=-1,low=INT_MAX;
        int high=0;
        for(int i=0;i<N;i++){
            low=min(low,A[i]),high+=A[i];
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isPossible(mid,A,N,M)){
                ans=mid;
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }return ans;
        
        
        // int ans=-1, low=INT_MAX, high=0 ;
        // for(int i=0 ; i<N ; i++)
        //     low=min(low,A[i]), high+=A[i] ;
            
        // while(low<=high)
        // {
        //     int mid = (low+high)/2 ;
        //     if(isPossible(mid,A,N,M))
        //     {
        //         ans=mid ;
        //         high=mid-1 ;
        //     }
        //     else low=mid+1 ;
        // }
        
        // return ans ;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends