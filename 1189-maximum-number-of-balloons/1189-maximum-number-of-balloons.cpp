class Solution {
public:
    int maxNumberOfBalloons(string text) {
         int b, a, l, o, n;
        b = a = l = o = n = 0;
        for (auto ch : text) {
            b += (ch == 'b');
            cout<<b<<" ";
            a += (ch == 'a');
         //   cout<<a<<" ";
            l += (ch == 'l');
         //   cout<<l<<" ";
            o += (ch == 'o');
        //    cout<<o<<" ";
            n += (ch == 'n');
         //   cout<<n<<" ";
        }
        return min({b, a, l/2, o/2, n});   //yeh l/2 and o/2 esleye yuki 2 bari chaiye dono toh 2 bari hi hone wpprds me but cstring toh ek chaiye
    }
};

  // int b, a, l, o, n;
  //       b = a = l = o = n = 0;
  //       for (auto ch : text) {
  //           switch (ch) {
  //               case 'b' : b++; break;
  //               case 'a' : a++; break;
  //               case 'l' : l++; break;
  //               case 'o' : o++; break;
  //               case 'n' : n++; break;
  //           }
  //       }
  //       return min({b, a, l/2, o/2, n});