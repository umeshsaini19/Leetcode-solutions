class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>st;
        for(auto it:wordList){
            st.insert(it);
        }
        
        
        if(st.find(endWord)==st.end()) return 0;
        int len=0;
        queue<string>word;
        word.push(beginWord);
        while(!word.empty()){
            len++;
            int size=word.size();
            for(int i=0;i<size;i++){
            string top=word.front();
            word.pop();
                
                for(int j=0;j<top.size();j++){
                    char ch=top[j];
                    for(char c='a';c<='z';c++){
                        top[j]=c;
                        if(top==endWord) return len+1;
                        if(st.find(top)==st.end()) continue;
                        
                        st.erase(top);
                        word.push(top);
                    }
                    top[j]=ch;
                }
            }
        }
        return 0;
    }
};

//      for(int j = 0; j < top.size(); j++){
//                     char ch = top[j];
                    
//                     for(char c = 'a'; c <= 'z'; c++){
//                         top[j] = c;
                        
//                         if(top == endWord) return len+1;
//                         if(st.find(top) == st.end()) continue;
                        
//                         st.erase(top);
//                         word.push(top);
//                     }
//                     top[j] = ch;