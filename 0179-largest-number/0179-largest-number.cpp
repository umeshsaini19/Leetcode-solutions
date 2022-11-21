bool compare(string a,string b){
     // cout<<a+b<<" "<<b+a<<" ";
    return a+b > b+a;
  
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
	
        vector<string> container;
		
        for(int i : nums) container.push_back(to_string(i));
                        
        for(int i=0;i<container.size();i++){
            cout<<container[i]<<" ";
        }
        sort(container.begin(),container.end(),compare);
            for(int i=0;i<container.size();i++){
          cout<<container[i]<<" ";
        }
        
        string result;
        
        for(int i=0;i<container.size();i++)  result+=container[i];
        
        return result[0]=='0'? "0" : result;
    
    }
};


 
//like humne pehle string me convert kiya fer  jo bool compare he voh return kr rha he ki 210 bda he ya 102 and 210 bda he toh sort is acc kro ki container me [2,10 agye he pehle and then result use krke container me add krdo and resuklt+ krdega value ]