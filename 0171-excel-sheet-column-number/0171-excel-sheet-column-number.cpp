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

// class Solution {
// public:
//     int titleToNumber(string columnTitle) {
//         // Initialize the output result...
//         int output = 0;
//         // Traverse the whole list through the loop...
//         for(auto c: columnTitle) {
//             // Process to get the excel sheet column number...
//             output = output * 26 + (c - 'A' + 1);    
//         }
//         return output;    // Return the output...  
//     }
// };