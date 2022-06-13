class Solution {
public:
    int dp[13][10001];
 int help(vector<int>& coins, int amount,int n){
//yeh vala coin changes recusrive sirf isi platform ke liye nrmal without itni conditions ke striver bhaiya ne jo btaaya voh bhi chal skta he
    
if(amount == 0) return 0;
        if(n < 0 || amount < 0) return INT_MAX-1;
     
     if(dp[n][amount]!=-1) return dp[n][amount];
  int one  = help(coins,amount,n-1);
    int two = 1+help(coins,amount-coins[n],n);
        return dp[n][amount]=min(one,two);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        int ans = help(coins,amount,coins.size()-1);
        return (ans < INT_MAX-1)?ans:-1;
    }
};  










// if(amount == 0) return 0;
//         if(n < 0 || amount < 0) return INT_MAX-1;
//         int one = help(coins,amount,n-1);
//         int two = 1+help(coins,amount-coins[n],n);
//         return min(one,two);
//     }
    
//     int coinChange(vector<int>& coins, int amount) {
//         int ans = help(coins,amount,coins.size()-1);
//         return (ans < INT_MAX-1)?ans:-1;