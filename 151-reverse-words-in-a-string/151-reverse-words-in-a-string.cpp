class Solution {
public:
    // string reverseWords(string s) {
        
        //yeh neche vala code lgbhag har ek test code ke liye cjhal kayega ek adhe ko chod  kr yeh sbse optimal he pr sbse last vala sbse oehla dekhn ahe agr smjna he toh
//    int left = 0;
//     int right = s.length()-1;
    
//     string temp="";
//     string ans="";
    
//     //Iterate the string and keep on adding to form a word
//     //If empty space is encountered then add the current word to the result
//     while (left <= right) {
//         char ch= s[left];
//         if (ch != ' ') {
//             temp += ch;
//         } else if (ch == ' ') {
//             if (ans!="") ans = temp + " " + ans;
//             else ans = temp;
//             temp = "";
//         }
//         left++;
//     }
    
//     //If not empty string then add to the result(Last word is added)
//     if (temp!="") {
//         if (ans!="") ans = temp + " " + ans;
//         else ans = temp;
//     }
    
//     return ans; 
// }
// };
    
    
    
    
    
    
    
    
    
    
    //yeh stack vali approach eeh
    
     
    // yeh logic he jaise word he =>  my name  toh jaise m aya hmne khali string me concetenate krdia fir y aa m ke sath concetenate krdia jaise hi space ai hmne skip krdi avoh part and my ko stack me daldia then again same name ke sath hi fir jab vapis nikalna he ek iteration ki stack ki and check kiya stack empty he agr ni he mtlb space ke badh top pe dusra element he ek element nikalo space deke dusra nikal do and asatha me pop krte rho
    string reverseWords(string s) {
        if(s.size()==0) return s;
        stack<string>st;
        string result;
        for(int i=0;i<s.size();i++){
            string word;
            if(s[i]==' ') continue;
            
            while(i<s.size() && s[i]!=' ' ){
                word+=s[i];i++;}
             st.push(word);
        }
        while(!st.empty()){
            result+=st.top();
            st.pop();
            if(!st.empty()) result+=" ";
        }
        return result;
    }
};
        
        
        
        
        
        
        
        
