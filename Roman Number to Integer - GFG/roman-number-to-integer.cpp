// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
       int output=0;                                    //vix
       int n=str.length();
       map<char,int>mp;
       mp['I']=1;
       mp['V']=5;
       mp['X']=10;
       mp['L']=50;
       mp['C']=100;
       mp['D']=500;
       mp['M']=1000;
       for(int i=0;i<n;i++){
           if(i<n-1 && (mp[str[i]]<mp[str[i+1]]) ){
               output+=mp[str[i+1]]-mp[str[i]];
            
               i++;
           }
           else{
               output+=mp[str[i]];
             
           }
       }
       return output;
   }
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends