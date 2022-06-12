class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>v;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]>v.back()){
                v.push_back(nums[i]);
            }
            else {
                int ind=lower_bound(v.begin(),v.end(),nums[i])-v.begin();//yeh return krega ki jo element he uske just next bdi vali value like 5,4 toh jaise hi lower bound me 4 gya toh isne 5 ka index yani 0 retun krdena toh value usme a jayegi
       v[ind]=nums[i];   
            }
        }
        return v.size();
    }
};