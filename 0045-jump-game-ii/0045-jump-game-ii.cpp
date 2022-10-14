class Solution {
public:
    int jump(vector<int>& arr) {
         // int jump=0,halt=0,ma=0;  
        // if(n==1)return 0;
        // if(arr[0]==0)return -1;
        // for(int i=0;i<n-1;i++){  //n-1 tk esleye kyuki last second tk punch gye oh mtlb last pe a gye he vahan se kya jump  //last second index hi last hoga jahan se last tk ja skte he bs aur kya hoga 
            
        //     ma=max(ma,i+arr[i]);    //hmne particular index pe delha voh kahan tk ja skta he agr voh sodha last tk jarha toh jump++ krke bhej do use 
        //   cout<<ma<<endl;
        //     if(ma>=n-1){  //agr sidha koi max last se bda agya krdo fer return ni toh if i==healt chlega
        //         jump+=1;  //ek jump toh lgegi edr bhi
        //         return jump;
        //     }
            
        //     if(i==halt){
        //     halt=ma;   //koi aise index ni mila jo max ho toh hum max vale ko age bdayenge kya pta 3 position age jane thi par pehla bhi max ho skta dusra bhi hmne try krna hmesha max lena he 
        //     jump+=1;
        //     }
        // }
        // if(halt>=n-1)return jump;
        // else return -1;
        
    
        
        

        
        //ab isme main he ki jaise 2 3 1 1 3 1 he toh me 2 chalonga hi maine 2 pe max dekha toh 2 aya 
        //ab 2 se age bdte  hi max 3 agya th me max ko 3 krduga pr me 3 abhi chluga ni 
        //me pehle 2 ke jitne steps he unko khtm krlu and jo 2 se leke steps ke bech me aya max uska i 
        //add krke use utna hi step chala dunga jaise ki 2 chala fer 3 chala fer 1 pr 3 pe hme
        //max milgya and hum 1 pe jake bhi 3+1 index tak jayenge and fer vahan se again same
    
        
        int n=arr.size();
        
      int jump=0,halt=0,mx=0;
          if(n==1)
        return 0;
         if(arr[0]==0)
        return -1;
      for(int i=0;i<n-1;i++){
            
            mx=max(mx,i+arr[i]);
                if(mx>=n-1){
                    jump+=1;
                    return jump;
                }
                
            if(i==halt){
                halt=mx;
                jump++;
            }
            
        }
        if(halt>=n-1){
            return jump;
        }
        
       
        else{
            return -1;}

    }
};