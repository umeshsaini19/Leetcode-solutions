class Solution {
public:
    void solve(string &s, vector<vector<string>>&ans, vector<string>&temp,int index){
         if(index == s.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=index; i<s.size(); i++){
            if(pali(s, index, i)){
                temp.push_back(s.substr(index, i-index+1));
                solve(s, ans, temp, i+1);
                temp.pop_back();
            }
        }
    }
    bool pali(string &s,int start,int end){
        while(start<=end){
        if(s[start++]!=s[end--])
            return false;}
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>path;
        solve(s,ans,path,0);
        return ans;
    }
};

//   vector<vector<string>> partition(string s) {
//         vector<vector<string>> ans;
//         vector<string> temp;
//         help(0, s, temp, ans);
//         return ans;
//     }
    
//     void help(int index, string s, vector<string> &temp, vector<vector<string>> &ans){
//         if(index == s.size()){
//             ans.push_back(temp);
//             return;
//         }
//         for(int i=index; i<s.size(); i++){
//             if(isPalindrome(s, index, i)){
//                 temp.push_back(s.substr(index, i-index+1));
//                 help(i+1, s, temp, ans);
//                 temp.pop_back();
//             }
//         }
//     }
    
//     bool isPalindrome(string s, int start, int end){
//         while(start<=end){
//             if(s[start++] != s[end--])
//                 return false;
//         }
//         return true;
//     }
// };

// Here we’re dividing the string into substrings and checking if it’s palindrome or not.
// We’re storing all the palindromic substrings into a temp vector, using the help function to divide them into substrings.
// In our help function our base condition if the checking index is equal to string size, that means we are at last index, so simply push back temp to our ans vector.
// Else we’ll check palindrome for the rest of the string & take a loop, divide index by index and check for palindrome.
// If it’s a palindrome substring then we’ll push it to ans & then we’ll call again the help function for the rest.
// After the function returns we’ll pop back the element from temp, which means there is another substring that is not a palindrome.
// Time complexity: O(n*2^n).