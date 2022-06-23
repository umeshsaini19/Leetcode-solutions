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
// >> right shift hota he iska mtlb 

// 2,2,3,2 he 
// 2-> 000000001 >> 0 =00000001 ==1 he toh sum 1; 

// 2-> 000000001>> 0 =00000001=1  toh sum hogya 2;

// 3-> 00000011>>0 =00000011&1=1 sum 3

// 2-> sum 4
//     4%3=1 
    
//     00000001<<0
    
// i=1;
// 2-> 000000001 >> 1 =00000000 & 1 ==0 he toh sum 0; 

// 2-> 000000001 >> 1 =00000000 & 1 ==0 he toh sum 0; 

// 3->00000011>>1 =00000001&1=1 sum 1
    
// 2-> sum 1 hi he ;

// 1%3 =1;

// sum aya 1
//     00000001<<1 =00000010 or 00000001=00000011 yeh ans ayega 

//  pehle ans tha 00000001 ab hoga 00000011 





   