class Solution {
public:
    void solve(int index, int target, vector<int>&candidates, vector<vector<int>>&ans, vector<int>&ds){
        if(target==0){
            ans.push_back(ds);
            return ;
        }
        for(int i=index;i<candidates.size();i++){
            if(i>index &&candidates[i]==candidates[i-1])continue;  //i>ind means manlo 1,1,1,2,2 he and jab 4th index pe aye ds me 2 tha toh hum dubara 2 tbhi pick kr payenge agr yeh first time he agr i>ind hogya means pehle v 2 aya same iteration me and ab dubara utha rhe he hum same kyuki manlo 5th index hota uspe bhi 2 hota and hmne 4th vala second iteration me pick kiya he toh 5th vala 3rd iteration me hoga same iteration me ni ho skta that;s why
            if(candidates[i]>target) break;
            
            ds.push_back(candidates[i]);
            solve(i+1, target- candidates[i], candidates, ans, ds); 
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0, target, candidates, ans, ds);
        return ans;
    }
};
//     void helper(int index, int target, vector<int>&candidates, vector<vector<int>>&ans, vector<int>&ds){
       
//         if(target == 0){
//             ans.push_back(ds);
//             return;
//         }
//         for(int i = index; i< candidates.size(); i++){
//             if(candidates[i] > target) break;
//             if(i  > index && candidates[i] == candidates[i-1])
//                 continue;
                
//             ds.push_back(candidates[i]);
//             helper(i+1, target- candidates[i], candidates, ans, ds); 
//             ds.pop_back();
//         }
        
//     }
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         sort(candidates.begin(), candidates.end());//sort the given candidates vector 
//         vector<vector<int>>ans;
//         vector<int>ds;
//         helper(0, target, candidates, ans, ds);
//         return ans;
//     }