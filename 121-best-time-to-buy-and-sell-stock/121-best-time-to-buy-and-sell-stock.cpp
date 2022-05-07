class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sbse_chota_age_bdte_huye=INT_MAX;
        int jo_hme_op_dega =0;
        int  ab_tak_ka_profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]< sbse_chota_age_bdte_huye){
                 sbse_chota_age_bdte_huye=prices[i];
            }
            ab_tak_ka_profit=prices[i]-sbse_chota_age_bdte_huye;
            if(ab_tak_ka_profit>jo_hme_op_dega){
                jo_hme_op_dega=ab_tak_ka_profit;
            }
        }
        return jo_hme_op_dega;
        
//        int lsf = INT_MAX; // least so far
//         int op = 0; // overall profit
//         int pist = 0; // profit if sold today
        
//         for(int i = 0; i < prices.size(); i++){
//             if(prices[i] < lsf){ // if we found new buy value which is more smaller then previous one
//                 lsf = prices[i]; // update our least so far
//             }
//             pist = prices[i] - lsf; // calculating profit if sold today by, Buy - sell
//             if(op < pist){ // if pist is more then our previous overall profit
//                 op = pist; // update overall profit
//             }
//         }
//         return op; // return op 

    }
};