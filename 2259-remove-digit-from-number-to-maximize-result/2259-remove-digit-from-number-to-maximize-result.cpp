class Solution {
public:
    string removeDigit(string number, char digit) {
      string c="";
        int mx;
        for(int i=0;i<number.size();i++){
            if(number[i]==digit){
            
                string temp=number.substr(0,i)+number.substr(i+1);
            
              
      c=max(temp,c);}}
        return c;
    }
};