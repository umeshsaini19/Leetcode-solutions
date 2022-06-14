// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++



class Solution{ //mereko ni pta sinlge dp se kyu ni chlra jabki striver bhaiya ka chlra
    int t[501][501];
    bool ispalindrone(string &str,int i,int j){
        while(i<j){
            if(str[i]!=str[j]){
            return false ;}
            i++;
            j--;
        }return true;
    }
    int solve(string &str,int i,int j){
        if(i>=j){
        return 0;}
        
        if(ispalindrone(str,i,j)){
            return 0;}
            if(t[i][j]!=-1){
            return t[i][j];}
            int res=INT_MAX;
            for(int k=i;k<=j-1;k++){
                res=min(res,1+solve(str,i,k)+solve(str,k+1,j));
            }
            return t[i][j]=res;
            
            
        
    }
public:
    int palindromicPartition(string str)
    {
       int n=str.size();
       memset(t,-1,sizeof(t));
       return solve(str,0,n-1);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends