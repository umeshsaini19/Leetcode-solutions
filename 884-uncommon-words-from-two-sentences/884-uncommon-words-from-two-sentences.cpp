class Solution {
public:
    
    void solve(string s,unordered_map<string,int>&mp){
     string   word="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                mp[word]++;
            word="";}
            else {
                word+=s[i];
            }
        }
        mp[word]++;
        
    }
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>ans;
        unordered_map<string,int>mp;
        solve(s1,mp);
        solve(s2,mp);
        for(auto it:mp){
            if(it.second==1)
            ans.push_back(it.first);
        }
        return ans;
    }
};

