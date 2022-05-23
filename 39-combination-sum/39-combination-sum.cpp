class Solution {
public:
    
    void solve( vector<vector<int>>&ans, vector<int>&v,int i,int target,vector<int>&arr){
        if(i==arr.size()){
            if(target==0){
                ans.push_back(v);
            }return ;
        }
        if(arr[i]<=target){
            v.push_back(arr[i]);
            solve(ans,v,i,target-arr[i],arr);
            v.pop_back();
        }
        solve(ans,v,i+1,target,arr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        solve(ans,v,0,target,candidates);
        return ans;
        
        
    }
};