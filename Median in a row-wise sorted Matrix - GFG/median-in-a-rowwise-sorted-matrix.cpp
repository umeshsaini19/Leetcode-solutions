// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here 
        int startval=0,endval=19999,midval;
        int n=r*c;
        while(startval<=endval){
            midval=(startval+endval)/2;
               int ans=0;
             for(int i=0;i<r;i++){
                  int l=0,h=c-1;
            while(l<=h){
            int mid=l+(h-l)/2;
            if(matrix[i][mid]<=midval){
                l=mid+1;
                
            }
            else h=mid-1;
            }
            ans+=l;
            }
            if(ans<=n/2){
                startval=midval+1;
            
            }
            else {
                    endval=midval-1;}}
        
        //  int startVal=0,endVal=2000,midVal;
        // int n=r*c;
        // while(startVal<=endVal)
        // {
        //     midVal=(endVal+startVal)/2;
        //     int ans=0;
        //     for(int i=0;i<r;i++)
        //     {
        //         int l=0,h=c-1;
        //         while(l<=h){
        //             int m=l+(h-l)/2;
        //             if(matrix[i][m]<=midVal)
        //           {   l=m+1;}
                    
        //             else h=m-1;
        //         }
        //         ans+=l;
        //     }
        //     if(ans<=n/2) startVal=midVal+1;
        
        //     else endVal=midVal-1;
        // }
        return startval;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends