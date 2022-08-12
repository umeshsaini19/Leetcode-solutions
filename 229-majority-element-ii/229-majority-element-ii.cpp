class Solution {
public:
    
    //isse pehle majority element 1 dekhlene tbhi smj me ayega 
    vector<int> majorityElement(vector<int>& nums) {
        int s=nums.size();
        int hero1=-1,hero2=-1,count1=0,count2=0;
        for(int i=0;i<s;i++){
            if(nums[i]==hero1)
                count1++;
            else if(nums[i]==hero2){
                count2++;
            }
            else if(count1==0){
                hero1=nums[i];
                count1=1;
            }
            else if(count2==0){
                hero2=nums[i];
                count2=1;
            }
            else {
                count1--;
            count2--;}
        }
        vector<int>Ans;
        count1=0,count2=0;//is que me chances he ki ek element jada bari agya dusra kam bari hme par chaiye n/3 se ajda hi esleye
                //check whether these potential candidate are really in majority or not.
        for(auto it:nums){
            if(hero1==it) count1++;
            else if(hero2==it) count2++;
        }
        if(count1>s/3) Ans.push_back(hero1);
        if(count2>s/3) Ans.push_back(hero2);
        return Ans;
    }
};