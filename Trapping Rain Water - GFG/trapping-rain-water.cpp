// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        
        int leftma=0;
        int rightma=0;
        int li=0;
        int hi=n-1;
       long long  int ans=0;
        while(li<=hi){    //jab left vali choti hogi and right vali bdi tab left se right jarhe else reverse
            if(arr[li]<arr[hi]){
                if(arr[li]>leftma){
                    leftma=arr[li];
                    
                }
                else{
                    ans+=leftma-arr[li];}
            
            li++;}
            else{
                if(arr[hi]>rightma){
                   rightma=arr[hi];
                    
                }
                else{
                    ans=ans+(rightma-arr[hi]);}
                hi--;
            }
        }return ans;
       }
    };

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends