class Solution {
public:
void solve(int start,int k, int n,  vector<int>&v,vector<vector<int>>&ans,int sum){
       if(k==0){
       if(sum==n){
           ans.push_back(v);
          // return;
       }
       return ;}
       for(int i=start;i<=9;i++){   //yeh for me i ke start bhejna jruri he ni toh next iteration pe puncha hi ni jayega baki combinations 1 and 2 krlo yeh easy  ho jayega 
           v.push_back(i);
           solve(i+1,k-1,n,v,ans,sum+i);
           v.pop_back();
               
       }
     
   }
    vector<vector<int>> combinationSum3(int k, int n) {
       vector<vector<int>>ans;
        vector<int>v;
        int sum=0;
    solve(1,k,n,v,ans,sum);
        return ans;
    }
};