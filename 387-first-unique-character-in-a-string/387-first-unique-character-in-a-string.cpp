class Solution {
public:
    int firstUniqChar(string s) {
         unordered_map<char,int> map;
        for(int i=0; i<s.length(); i++)
        {
                map[s[i]]++;   
        }
        for(int i=0; i<s.length(); i++)
        {  
            if(map[s[i]] == 1)
                return i;
        }
        return -1;
    }
};
// koi bhi map liya usme sarri input daldi with ocunt fer dubara se string ko traverse kiya ajsie l aya maine chek krlia ki l ka count 1 he hnji 1 he toh i return krdo bath khtm 