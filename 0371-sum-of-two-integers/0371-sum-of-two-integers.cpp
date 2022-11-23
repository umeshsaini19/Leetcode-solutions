class Solution {
public:
  int getSum(int a, int b) {
        while(b) {
            unsigned c = a&b;
            a ^= b;
            b = c << 1;
        }
        return a;
}
};

//vasse jada muskil ni he bs neetcode se smj lena aise smj ni ayega next time bhi 