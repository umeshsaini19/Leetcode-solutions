class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int n = nums.size(); // extracting the size of the array
        
        int hero = nums[0]; // Intially assume our majority element of index zero 
        int power = 1; // count of majority element
        
        for(int i = 1; i < n; i++) // start traversing from the array
        {
            if(nums[i] == hero) // if same element encounters
            {
                power++; // increase the power of element
            }
            else // if not same element
            {
                // decrease power 1, as it used to kill the villian
                power = power - 1; 
                
                // if power of our hero becomes zero at any point,
                // we say may be your are not our hero, so assign new hero
                if(power == 0)
                {
                    hero = nums[i]; // assigning hero
                    power = 1; // make it's power to 1
                }
            }
        }
            return hero;
    }
};