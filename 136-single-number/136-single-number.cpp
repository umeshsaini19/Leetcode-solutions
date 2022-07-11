class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //jaise map ,set ,array ,sort sbse ho jayega pr bath tb he jab o(n) and o(1) me hi ho toh iske liye sbse kargar he xor kyuki hmepta he same no ka xor 0 hoga jo ek extra hoga vahi ans a jaygea;
        int ans=0;
        for(auto x:nums){
            ans^=x;
        }
        return ans;
    }
};