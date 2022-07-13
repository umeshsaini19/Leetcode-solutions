
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        vector<vector<char>>v(s.size()+1);
        for(auto [a,x]:mp){
            v[x].push_back(a);  //x index pe push krni he a value 
        }
        
        string res; 
        for(int i=s.size();i>0;i--){   //yeh cunt ke liye lopop and neche vali value ke liye 
        for(auto y:v[i]){
            res+=string(i,y);   // y =value and i= times means ki manlo 2nd index pe e 2 bari aya he toh 2 bari print krna he na yeh voh he ki ee sbse age 2 bari lgado aise 
        }
        }
           
        return res;
    }

      
    
};
// simple bucket sort lgaya and value last me sbse bdi he jo sbse jada bari ai he ek trah se int vala hi he jo que tha ab
