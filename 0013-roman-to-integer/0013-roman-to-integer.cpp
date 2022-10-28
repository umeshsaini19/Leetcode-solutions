class Solution {
public:
    int romanToInt(string s) {
     int res=0;
        unordered_map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
          mp['X']=10;
          mp['L']=50;
          mp['C']=100;
          mp['D']=500;
          mp['M']=1000;
        for(int i=0;i<s.length();i++){
            if(i<s.length()-1 && mp[s[i]]<mp[s[i+1]]){  //jaise IV he toh 5 4 se bda he toh subtract krke add krdo agr VI he toh dono alag alag add krke plus krdo 
                res+=mp[s[i+1]]-mp[s[i]];
                i++;
            }
            else{
                res+=mp[s[i]];
            }
        }return res;
    }
    };