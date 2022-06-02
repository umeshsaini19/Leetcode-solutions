class Solution {
public:
    int romanToInt(string s) {
         // int res=0;
        // unordered_map<char,int>mp;
        // mp['I']=1;
        // mp['V']=5;
        //   mp['X']=10;
        //   mp['L']=50;
        //   mp['C']=100;
        //   mp['D']=500;
        //   mp['M']=1000;
        // for(int i=0;i<s.length();i++){
        //     if(i<s.length()-1 && mp[s[i]]<mp[s[i+1]]){  //jaise IV he toh 5 4 se bda he toh subtract krke add krdo agr VI he toh dono alag alag add krke plus krdo 
        //         res+=mp[s[i+1]]-mp[s[i]];
        //     }
        //     else{
        //         res+=mp[s[i]];
        //     }
        // }return res;
        
  unordered_map <char, int> dict {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        
        int result = 0;
        for (int i = 0; i < s.size(); i++) {
            if (dict[s[i]] < dict[s[i+1]]) result -= dict[s[i]];
            else { result += dict[s[i]]; }
        }
        
        return result;
    }
};