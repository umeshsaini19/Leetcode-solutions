class Solution {
public:
    
    //cmnt vala part hta do tn second method he 
    bool isAnagram(string s, string t) {
//      if(s.size()!=t.size()) return false;
        
//         unordered_map<char,int>mp;
//         for( auto c:s)
//             mp[c]++;
//         for(auto c:t){
//             mp[c]--;
//             if(mp[c]<0) return false;
//         }
//         return true;
        
        
      
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
        
//         return s==t;

//  if (s.size()!=t.size()) return false;
        
// 		unordered_map <char, int> umap;
//         for (char c:s) umap[c]++;
//         for(char c:t) {
//             umap[c]--;
//             if (umap[c]<0) return false;
//         }
        
//         return true;
        
        //3rd soluion

 if(s.size() != t.size()) return false;
        
        unordered_map<char, int> freq;
        
        for(int i = 0; i < s.size(); i++){
            freq[s[i]]++;
            freq[t[i]]--;
        }
        
        for(auto f : freq){
            if(f.second != 0) return false;
        }
        
        return true;
            }
};