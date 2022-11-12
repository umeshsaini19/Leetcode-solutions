class Solution {
public:
     int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>m;
        for(auto x:nums){
            m.insert(x);
        }
        int k=1; //k=1 bcz 0 is not a positive number
        for(auto x:m){
            if(m.find(k)==m.end()){
                return k;
            }
            else k= k+1;
        }
        
        return k;
     }
         };