class Solution {
public:
    char findTheDifference(string s, string t) {
      	unordered_map<char, int> um;
		for(int i = 0; i < t.size(); i++){
			um[t[i]]++;
		}
		for(int i = 0; i < s.size(); i++){
			um[s[i]]--;
		}
		for(auto i : um){
			if(i.second == 1){
				return i.first;
			}
		}
		return 'a'; // dummy character
    }
};

//isme yeh he ki s ko add krdo fir t se remove krdo jo last me bcha t me and uska count==1 he toh return krdo uska r=first