class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        for(auto c : columnTitle){
            ans=ans*26+(c-'A'+1);
        }
        return ans;
    }
};
//dekh jaise binary to decimal conversion hota he vasse hi he similar trah se jaise 

//  CDA he manlo toh first positiob pe   26^0+ 28-26+1 =3 aise c-'A' +1 esleye ki usko convert krna he na numeric me alphabetic se similar decimal to binary converision with base 26