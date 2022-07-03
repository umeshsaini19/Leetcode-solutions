class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int prev_diff=0;
        int len=nums.size();
        int currdiff=0;
        int count=1;
        for(int i=1;i<len;i++){
            currdiff=nums[i]-nums[i-1];
            if((currdiff>0 and prev_diff<=0 )||( currdiff<0 and prev_diff>=0)){
                count++;prev_diff=currdiff;}
        }
        return count;
    }
};

//self explanantory he ki prev vala jab 0 se kam hoga tb curr val 0 se jada chaiye and vice versa equal vali condition first time ke liye and length =0 means ek element toh hoga hi apna single 
