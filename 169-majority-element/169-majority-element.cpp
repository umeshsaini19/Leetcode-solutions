class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int n = nums.size();
		//ek tarah se jais evoting krenge agr khudko vote milra toh count+1 agr dusre ko milra toh count-1;
        //and agr count 0 hogya mtlb brabr he abhi toh jispe last khtm huya voh winner lgra
       int hero=nums[0];
        int power=1;
        for(int i=1;i<n;i++){
            if(nums[i]==hero)
                power++;
            else 
                power=power-1;
            
            if(power==0){
                hero=nums[i];
                power=1;
            }
        }
        return hero;
    }
};