class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
          vector<vector<int>>res;
        int n=nums.size();
        if(nums.empty())
            return res;
        
        sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        int target_3=target-nums[i];
        for(int j=i+1;j<n;j++){
            int ressum=target_3-nums[j];
            //int ressum=target-nums[i]-nums[j];
        int left=j+1;
            int right=n-1;
            
                while(left < right) {
                    int two_sum=nums[left]+nums[right];
            if(two_sum>ressum){
                right--;
            }
            else if(two_sum<ressum) left++;
            
            
            else{
                vector<int>v(4);
                v[0]=nums[i];
                v[1]=nums[j];
                v[2]=nums[left];
                v[3]=nums[right];
                res.push_back(v);
                while(left<right && nums[left]==v[2]) left++;
                while(left<right && nums[right]==v[3]) right--;
                
            }
                }
            while(j+1<n-1 && nums[j+1]==nums[j])j++;
            while(i+1<n-1 &&nums[i+1]==nums[i])i++;
        }
    }return res;
    }
};