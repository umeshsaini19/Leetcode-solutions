class Solution {
public:
    //pepcoding se video dekhna pehle 
    
    //jaise hme koi tree dia ho and zig zag values na fill krni ho toh hum neche se upr jate he and neche se upr jate huye hme jo value di he uska parent dundte he and normal tree me parent n/2 hota he like 13 toh parent 6 fir 6 ka parent 3 and jo ans isko vector me daldo and reverse krdo 
    vector<int> pathInZigZagTree(int label) {
         int last_l_val = 1;
		//curr level value
        int curr_l_max = 0;
        while(curr_l_max<label){   //jab tak hmara current level se jada ni hota yeh jab brak huyi hme 16 mila and nraek hogya
            curr_l_max+=last_l_val;   // 1 3 7 15 .....
            last_l_val*=2; // 1 2 4 8 16
        }
        last_l_val/=2;          // 8  hmari 16 milne pr breakhogi toh use dubara 8 krna tha hme
        vector<int> v;
        while(label!=1){  //jab tk root pe ni pucnhte parent ko find krte jao 
            v.push_back(label);                      // 13 5 3 
            int compliment = (3*last_l_val-label-1);    // first find the compliment of label means original children of label's parent 
            label = compliment/2;  //yeh parent hoga label kaa 
            last_l_val/=2;    //upr vale level pe jate hi value/2 
        }
		// push 1 to vector 
        v.push_back(1);   //last me parent bhi add krdia
		//reverse the vector 
        reverse(v.begin(),v.end());  //value ulti ai he unko reverse krdo
        return v;
    }
    
};