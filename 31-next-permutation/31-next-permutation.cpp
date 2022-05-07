class Solution {
public:  
    
    //ek chij ka dyan rkhna he isme ki int i,j upr hi krdo nahi toh bar bar krna pd jayega and ans me variations honge
    void nextPermutation(vector<int>& nums) {
            int i,j;
        for(  i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                break;}
        }if( i==-1)reverse(nums.begin(),nums.end());
        else{
            for(  j=nums.size()-1;j>=i;j--){
                if(nums[i]<nums[j])
                    break;}
            swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1,nums.end());
        }
                     
    }
};
  