// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void solve(int i,int j,vector<vector<int>> &m,int n, vector<string>&ans,string move, vector<vector<int>>&vi,int di[],int dj[]){
        if(i==n-1 && j==n-1){ ans.push_back(move); return ;
        }
        
        string dir="DLRU";
        for(int ind=0;ind<4;ind++){
            int nexti=i+di[ind];
            int nextj=j+dj[ind];
            if(nexti>=0 && nextj>=0 && nexti<n && nextj<n && vi[nexti][nextj]!=1 && m[nexti][nextj]==1){
                vi[i][j]=1;
                solve(nexti,nextj,m,n,ans,move+dir[ind],vi,di,dj);
                vi[i][j]=0;
            
        }}
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
      vector<string>ans;
      vector<vector<int>>vi(n,vector<int>(n,0));
      int di[]={1,0,0,-1};
      int dj[]={0,-1,1,0};
      if(m[0][0]==1) solve(0,0,m,n, ans,"",vi,di,dj);
      return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends