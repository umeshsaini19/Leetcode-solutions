class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
      
        vector<vector<int>>ans;
     ans.push_back({});
     for(int num:nums){
         int n=ans.size();
         for(int i=0;i<n;i++){
               vector<int>temp=ans[i];
             temp.push_back(num);
             ans.push_back(temp);
         }
     }
        return ans;
    }
};

 //isme normally hum log kr rhe he ki jaise ans me khali he toh uski ek copy bnai usme 1 add krke usko daldia fer khali and 1 ki ek copy bni usme 2,[1,2] daldia aise bs copy bnao and daldo