class Solution {
public:
  
    bool wordPattern(string pattern, string s) {
          map<char, int>mp1;
        map<string, int>mp2;
        vector<string>v;
        string str = "";
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == ' ')
            {
                v.push_back(str);
                str = "";
            }
            else{
                str += s[i];
            }
        }
        v.push_back(str);
        str = "";
        
        if(v.size() != pattern.length())
        {
            return false;
        }
        
        for(int i=0; i<v.size(); i++)
        {
            if(mp1[pattern[i]] != mp2[v[i]])
            {
                return false;
            }
            else{
                mp1[pattern[i]] = i+2;  //yahan pe kuch bhi dalskte the ek trah se ki es pattern pr yeh index lgado and dubara se check kro us patern pe vahi index he na 
                mp2[v[i]] = i+2;
            }
        }
        return true;
    }
};