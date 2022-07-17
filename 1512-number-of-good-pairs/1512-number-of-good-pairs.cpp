class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=mp[nums[i]];
            mp[nums[i]]++;
        }
        return sum;
    }
};

//jaise 1 2 3 1 1 3 he toh mp ke andr 1->1 ,2,3   //pehle map me 1 se age 1 he means abhi 1 one aya jaise hi dusra one aya toh ans me add krdenge bcz current one ek one aur he jo peche and equal he jaise hi dusra one aya same 1 ke upr 2 lag gya toh current 1 se 2 aur one he jo same he and pehle he bs add krte jana he mp me jo bhi value he and usko count me map me add me add krna he 
                                    //2->1    
//                                    3->1,2