class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>h((amount+1), INT_MAX-1);
        h[0] = 0;
        for(int i = 0; i < h.size(); i++)
        {
            for(int j = 0; j < coins.size(); j++)
            {
                if(i >= coins[j]) h[i] = min(h[i], 1 + h[i-coins[j]]);  //vase min 1 d ke liye yehi formula jota he maine dry run kiya he and agr try krna hoga next time b krlop 
              //  cout<<i<<"x "<<h[i]<<" ";}
                
             //  cout<<1+h[i-coins[j]];
             
            }
        }
          // for(int i = 0; i < h.size(); i++)
                 // cout<<h[i]<<" ";
        return (h[h.size()-1] < INT_MAX - 1)?h[h.size()-1]:-1; 
    }
};

//1d 2d sbse kr skte he isko hmne 1d se bhi kiya kyuki yeh famouse problem he so interviewer expect krta he ki tumhe dono ana chaiye isme   baki jo 2d he voh toh same he 0-1 knapsacj unbounded vali  //isse pehla vala submittiosn hi dekhlio


//isme 1 d dp esleye bcz isme duplicacy he and duplicay me hum same same value use kr skte and for 2 dp dp jaise target sum or 0 1 knaosack vala jahan duplicacy allowed ni he bvoh value upr vali row se lete he na ki kahin bhi and upr vali row me kabhi bhi voh element ni honge subtract krke jo neche ayenge esleye dost 1d dp and 2 d dp alag alg jagah lgti he 
