class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
          vector<vector<int>>ans;
         int n=nums.size();
        // // if(nums.empty())
        //     return ans;
          sort(nums.begin(),nums.end());     // jo given he usko sort krlo toh 11112222333444 aise ek sath  a ajey and skip krna easy ho like 1 2 3 4 ek bari dekhlia toh bar bar na dkhne hum 
        for(int i=0;i<n;i++){
            int first_sum=target-nums[i];      // 3 ka sum jaise hoga voh hi 
            for(int j=i+1;j<n;j++){
                int find_sum=first_sum-nums[j];   //  hme chaiye   target-nums[i]-nums[j]
                int left=j+1;                     //just j se agla start krdo and right se peche rehke without duplicate u\i+j+right+left nikal lo
                int right=n-1;                         //jaise 3 sume me peche se traverse krte he agr ans bda aya toh right ko peche ni toh left ko age 
                while(left<right){                 
                    int sum=nums[left]+nums[right];
                    if(sum>find_sum) right--;
                   else  if(sum<find_sum) left++;
                    else {
                        vector<int>res(4);                     //2d ans me ek sath ni dal skte na toh new 1 d vector bvna lia with size
                        res[0]=nums[i];
                        res[1]=nums[j];             //sbko value jaise jaise ai
                        res[2]=nums[left];
                        res[3]=nums[right];
                        ans.push_back(res);
                        
                        while(left<right&& nums[left]==res[2])left++;             // agr duplicate left 2 pe he na  same he toh age bdhao
                        while(left<right && nums[right]==res[3]) right--;
                        
                    }
                    
                } 
                while(j+1<n-1 && nums[j+1]==nums[j]) j++;
                while(i+1<n-1 && nums[i+1]==nums[i])i++;          //same i and j duplicate he toh age bdhaye
            }
        }return ans;
        
//           vector<vector<int>>res;
//         int n=nums.size();
//         if(nums.empty())
//             return res;
        
//         sort(nums.begin(),nums.end());
//     for(int i=0;i<n;i++){
//         int target_3=target-nums[i];
//         for(int j=i+1;j<n;j++){
//             int ressum=target_3-nums[j];
//             //int ressum=target-nums[i]-nums[j];
//         int left=j+1;
//             int right=n-1;
            
//                 while(left < right) {
//                     int two_sum=nums[left]+nums[right];
//             if(two_sum>ressum){
//                 right--;
//             }
//             else if(two_sum<ressum) left++;
            
            
//             else{
//                 vector<int>v(4);
//                 v[0]=nums[i];
//                 v[1]=nums[j];
//                 v[2]=nums[left];
//                 v[3]=nums[right];
//                 res.push_back(v);
//                 while(left<right && nums[left]==v[2]) left++;
//                 while(left<right && nums[right]==v[3]) right--;
                
//             }
//                 }
//             while(j+1<n-1 && nums[j+1]==nums[j])j++;
//             while(i+1<n-1 &&nums[i+1]==nums[i])i++;
//         }
//     }return res;
    }
};