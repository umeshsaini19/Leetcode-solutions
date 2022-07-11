class Solution {
public:
    bool solve(string s, string t){
        unordered_map<char,char>mp;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!=t[i]) return false;
            
            }
                else mp[s[i]]=t[i];
            
        }
        return true;
    }
    bool isIsomorphic(string s, string t) {
        return solve(s,t) and solve(t,s);//yeh dono krne jruri he kyuki start me kisi ek vlue like badc and baba ke ecample mme b ke sath b hogya a ke sath pr d ke sath fir b hogya toh revere v check krnz jruri he
    }
};
   //self explain he yr dono mapped ko dekh rhe he 