class Solution {
public:
    
    //que ki bath ki jaye toh que bolra he ki jaise aaaaaccccc he ye total 2 bari arha he same cccccaaaa yeh 2 bari arha he toh krlo and s.substr(i,10) means index i se shuru krke agle 10 element tbhi i<s.size()-9 he ki 9 pehle rukhjyae 
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>mp;
        vector<string>res;
         if (s.size() < 10) return res;
        for(int i=0;i<s.size()-9;i++){
            mp[s.substr(i,10)]++;
        }
        for(auto x:mp){
            if(x.second>1)
                res.push_back(x.first);
        }
        return res;
    }
};