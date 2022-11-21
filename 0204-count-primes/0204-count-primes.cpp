class Solution {
public:
    int countPrimes(int n) {
        vector<bool> primes(n+1,true);
        primes[0]=false;
        primes[1]=false;
        int count=0;
        
        for(int i=2;i*i<=n;i++){
            if(primes[i]){
            for(int j=2*i;j<=n;j+=i){
            primes[j]=false;
            }
        }
        
        }
        for(int i=2;i<n;i++){
            if(primes[i]){
                count++;
            }
                
        }
        return count;
    }
};

//anuj bhaiya se sieve of erathaisnos jo bhi he voh smja he usme yehi he ki jaise hme 14 se pehle tk ke check krne he toh  hum under root 14 tak i run krenge and o(n) se o(under root n  ) ho jayegi complexity kyuki jaise 7 he uska hi last multiple ho skta he 14 uske baad toh koi aise value ni hogi jisse check kr skte he aur jo 14 he voh hum ne 2 se pehle hi check krlia he so no need and ek baat aur second loop ka kam he ki jaise hme 2 ke multiple ko vector me false krne he esleye 2*i toh 4 se start krnege and j+=i means 4+=2 means har bari sidha gap 2 ka hi mila and last me sidha count krlia he and 0,1 non primes he so unko pehle hi false krdia he hmne