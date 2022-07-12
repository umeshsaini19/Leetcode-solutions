class Solution {
public://simple jo hum dimag lgate he normal vahi he ki map me value dali and dusre se check krli ki yeh value ka count0 se bda he toh count kam krdo and usko ans vector me daldo
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
     unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]++;
        }
        for(int i =0;i<nums2.size();i++){
            if(mp[nums2[i]]>0){
                ans.push_back(nums2[i]);
                mp[nums2[i]]--;
                
            }
        }
        return ans;
    }
}; 

// map<int,int>freq;
//         vector<int>ans;
//         for(int i = 0;i<nums1.size();i++){
//             freq[nums1[i]]++;
//         }
//         for(int i = 0;i<nums2.size();i++){
//             if (freq[nums2[i]] > 0){
//                 freq[nums2[i]]--; 
//                 ans.push_back(nums2[i]);
//             }
//         }
//         return ans;