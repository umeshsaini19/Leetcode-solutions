class Solution {
public:
    
    //code dekh ke hi smj a jayega and second thing is ki  2 element isselye ek sath liye he ki same element ek sath na aye agr ek leliye and usse jab dubara pq me dala and vahi sbse upr agya dubara toh kya krega esleye 2
    string reorganizeString(string S) {
    string res="";
        unordered_map<char,int> map;
        priority_queue<pair<int,char>> pq;
        
        for(auto i : S){
            map[i]+=1;
        }
        
        for(auto i : map){
            pq.push(make_pair(i.second,i.first));
        }
        
        while(pq.size() > 1){
            auto top = pq.top();
            pq.pop();
            auto next = pq.top();
            pq.pop();
            
            res+=top.second;
            res+=next.second;
            
            top = make_pair(top.first-1,top.second);
            next = make_pair(next.first-1,next.second);
            
    
            if(top.first > 0){
                 pq.push(top);
            }
            if(next.first > 0){
                pq.push(next);
            }
            
        }
       if(!pq.empty()){
            char last = pq.top().second;
            if(pq.top().first > 1){
                return "";
            }
            res+=last;
        
        }
        return res;
}
};
        
   