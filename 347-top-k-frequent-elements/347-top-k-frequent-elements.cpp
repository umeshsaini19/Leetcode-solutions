class Solution {
public:
    
    //jo sol ab likha jayega i think sbse sahu hoga 
    //toh bath kuch aise he ki hmne ek map bnalia frequency vala usko ek vector me dalnegeki jaise map me 1 ki frequence 3 he and 2 ki 5 he 3 ki 2 he 4 ki 1 he toh vector hum lenge jitne size ka array he usse ek bda kyuki suppose sarre element 1 he toh uski frequency five hogi toh bucket sort me hum jitni freuqncy he us index pe uski value dalre frequency ke acc value  dalre he and soch ki jasie jiski frequency sbse jada hogi vph sala apne ap sbse last me hi lga hoga jaise 1 ki 2 and 2 ki 5 he toh 5 index pe 2 daldia hme  and fir peche se traverse kro and ans  ajayega 
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){   //frequency map create kiya he 
            mp[nums[i]]++;
        }
        vector<vector<int>>v(nums.size()+1);   //ab 2d ek toh esleye ki kya pta ek hi jagah pe 2 3 values bhi a skti he jaise 1,1,2,2,3 toh 2 index pe 1 and 2 dono honge ne
        for(auto [a,b]:mp){  //frequency and value us frequency yani b ke upr a dalna he 
            v[b].push_back(a);
        }
        vector<int>ans;
        for(int i=v.size()-1;k;i--)  //yaha pe k ka mtlb ki k jab tk zero na hoga chalalo jaise hi zero huya krdo bnd toh yeh k+k approx n time hogya
        {
            for(auto a:v[i])  {  //same vahi logic 2d vala ki ek positon pe 2 ho skte he 
            ans.push_back(a);
            k--;
            }
            
        } return ans;}
    
};

//  unordered_map<int, int> freq;
//         for (auto num : nums) freq[num]++;
        
//         vector<vector<int>> buckets(nums.size()+1);
//         for (auto [a, b] : freq)
//             buckets[b].push_back(a);
        
//         vector<int> res;
//         for (int i = nums.size(); k; i--) {
//             for (auto a : buckets[i]) {
//                 res.push_back(a);
//                 k--;
//             }
//         }