class Solution {
public:
    
    void solve( vector<vector<int>>&ans, vector<int>&v,int i,int target,vector<int>&arr){
        if(i==arr.size()){            //agr index last pe punch gya he toh 2 possibility he ya toh target hi 0 hogya he mtlb hum sahi he and me push krdo else vapis jao hum galt agye return lrdp
            if(target==0){
                ans.push_back(v);
            }return ;
        }
        if(arr[i]<=target){    //agr value target se choti he tbhi push kro na ni toh kya lroge push krke
            v.push_back(arr[i]);    
            solve(ans,v,i,target-arr[i],arr); //pick element of same index vala case
            v.pop_back();           //jab return krenge toh jo eleemtn pick kiya he use remove v krna pdega next cases ke liye
        }
        solve(ans,v,i+1,target,arr);         //yeh index bddha rhe he pr element pick ni kr rhe hum log
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        solve(ans,v,0,target,candidates);
        return ans;
        
        
    }
};