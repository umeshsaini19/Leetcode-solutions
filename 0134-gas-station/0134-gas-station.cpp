class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if(accumulate(gas.begin(),gas.end(),0)<accumulate(cost.begin(),cost.end(),0)){  //agr value ka sum kam jada he voh edr hi -1 return hotrha he age ki lod hi ni he
            return -1;  } //hum jo neche likha ki dono ka apas me sum krke pehle check krlo agr aise hi pta chlra baki logic kilod hi ni he
            int n=gas.size();
            int  remaining=0;
            int ans=0;
            for(int i=0;i<n;i++){
  remaining+=gas[i]-cost[i]; //jaise jaise e age bdta jarha ho dono ka diff leta jarha hu jahan pe muje cost kam mile and gas jada me usko starting point consider kr skta hu not sure 
                
if( remaining<0){
    ans=i+1;
    remaining=0;   //jaise hi remaining less than zero huya means hum age ja hi ni skte toh uska kya krenge usko rehne do ans and firse start kro
}
                
            }
            return ans;
            
        
    }
};

//code with alisha se smja he hmne

//agr simple true ya false return krna hota ki ja skte ho ya ni toh tum gas vali plus krletere aodscost vali and dono ko subrtract krdete agr + hota toh yes -ve hota toh no