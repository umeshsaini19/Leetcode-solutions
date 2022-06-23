class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        
        //codebix youtube channel 
        for(int i=0;i<32;i++){ //32 bit hoti he total toh yeh voh 32 bit ko trvaerse krne ko
            int sum=0;
        for(int j=0;j<nums.size();j++){
            if(((nums[j]>>i)& 1)==1)   //yeh check krne ke liye bit set ya ni agr set he count bd rha he jaise manlo count 4 hogya to 1 no extra he jiske krke count bd rha he
                sum++;
        }
            sum%=3;  //modulus krke ki kitne bde he 
            if(sum!=0){
                ans |= sum<<i;   //fir  voh ans vali bit ko set krdega agr count se modulus krne ke badh ans nikl jayega 
            }
        }
        return ans;
    }
};