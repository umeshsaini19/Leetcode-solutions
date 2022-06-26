class Solution {
public:
    int countAsterisks(string s) {
	
	int ans =0;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(count%2==0){                   //jaise yeh sidhi vali dandi ka count 0,2,4,6 arhi he vasse hi hmara ans arha he 
                if(s[i]=='*') ans++;//count jab 2 hoga mtlb hum 2 se 3 vale dbbe me agye he 
            }
 // 1 se 2 ke bech vale me ans bi bdega 2 se 3 vale me bdega 3 se 4 me ni vdgea
            if(s[i]=='|') count++;
            
        }
    return ans;
    }
};