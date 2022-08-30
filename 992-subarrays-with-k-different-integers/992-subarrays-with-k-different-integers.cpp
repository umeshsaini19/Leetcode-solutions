class Solution {
public:
    int solve(vector<int>& nums, int k) {
      int n = nums.size();
        
        unordered_map<int, int> mp;
        
        int left = 0;
        
        int count = 0;
        
        for(int right = 0; right < n; right++)
        {
            mp[nums[right]]++;
            
            while(mp.size() > k)
            {
                mp[nums[left]]--;
                
                if(mp[nums[left]] == 0)
                {
                    mp.erase(nums[left]);
                }
                
                left++;
            }
            
            int curr_count = right - left + 1;
            
            count += curr_count;
        }
        
        return count;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        int count_at_most_k = solve(nums, k);
        
        int count_at_most_k_1 = solve(nums, k - 1);
        
        int count_exactly_k = count_at_most_k - count_at_most_k_1;
        
        return count_exactly_k;
    }
};

//ek logic he ki jaise hme subaarya with k chaiye toh =atmost k-atmost k-1;
//jaise ki hme atmost(3) milgya hmne atmost (2) dundlia agr 3 atmost me se 2 atomost delete krenge toh sirf exactly 3 vale hi bchenge same concept for substrong v