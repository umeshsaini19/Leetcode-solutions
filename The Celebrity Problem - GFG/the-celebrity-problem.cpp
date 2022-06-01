// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
    
       int in[n]={0};
       int out[n]={0};
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               if(M[i][j]==1){
                   in[j]++;   //2 array bnaliye and in[j] mtlb kitne j aise he jinko i jante he toh ++ krdo 
                   //out [i]//kitne i aise he jo bakion ko jante he
                   out[i]++;
               }
           }
       }
           for(int i=0;i<n;i++){     //ab in[i] ko sabhi janne chhiaye tbhi n-1 and out[i] means voh kisi ko na jane
               if(in[i]==n-1 && out[i]==0) return i;
           }
          
        return -1;
        int c=0;
        for(int i=1;i<n;i++){
            if(M[c][i]==1)
            c=i;
        } 
        for(int i=0;i<n;i++){
            if( (M[c][i]==1 || M[i][c]==0))return -1;
        }return c;
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
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends