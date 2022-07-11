class Solution {
public:
    int solve(int temp){
        int sum=0;
        while(temp>0){
            sum=sum+(temp%10)*(temp%10);
            temp=temp/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int temp=n;
        while(1){
            if(temp==89) return false;   /// sum of digits kisi bhi no ka always 89 ya 1 hi hoga yeh yad rkhna he baki toh har bari check horha he and jab tak dpno me se ek na ho jata krte jap krte jao 
            if(temp==1) return true;
            temp=solve(temp);
        }
    }
};