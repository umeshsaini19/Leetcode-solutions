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
//notes 1-> Firstly i use bfs here beacuse we have to find shortest path and shortest path will be find by using bfs
// approach yeh ki like hot diya he hum sirf ek word change kr skte he isme toh hme h uthaya and a se leke sarre word dalke check kiya set ke under ki koi he agr he toh us node ko erase krdia bcz ek node ek bari hi dekhni he and new vali se same kam krna he and agr hot ki 3no word change krne se kuch na milra toh dubara se same word hi rhega and next word ko dekho 

// ab sochra hoga why we use set not direct goven vector se ni kiya bcz bhai g set me traversal O(1) and vector me O(n) toh us n ko bchane ke liye and iske tc O(m*n*26)
//baki sikhha yeh code code librar se he