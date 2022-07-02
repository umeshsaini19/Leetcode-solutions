class Solution {
public:
    long int mod=10^9+7;
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
          long int ans = 0, maxWidth = 0, maxHeight = 0;
        
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        
        sort(begin(horizontalCuts), end(horizontalCuts));
        sort(begin(verticalCuts), end(verticalCuts));
        
        for (int i = 0, prev = 0; i < horizontalCuts.size(); i++) {
            maxHeight = max(maxHeight, (long int) horizontalCuts[i] - prev);
            prev = horizontalCuts[i];
        }
        
        for (int i = 0, prev = 0; i < verticalCuts.size(); i++) {
            maxWidth = max(maxWidth, (long int) verticalCuts[i] - prev);
            prev = verticalCuts[i];
        }
        
        return (maxWidth * maxHeight) % 1000000007;
    }
};
// In this previous process we are excluding the first piece and last piece as they are not in between cuts. So just add cut h in horizontalCuts and w in verticalCuts before sorting. In this way we include the last pieces in between cuts. For the first pieces we are initialising them in maxh and maxv (They are simple the first element in the array after sorting). the maxh and maxv will be determined correctly.

