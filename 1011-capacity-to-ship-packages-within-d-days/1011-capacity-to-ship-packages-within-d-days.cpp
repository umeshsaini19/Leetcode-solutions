class Solution {
public://book allocation problem krke a ho jayega aram se
    
    bool isPossible(int barrier, vector<int>&A, int N, int M)
    {
        int pages=0,student=1;
        
        for(int i=0;i<N;i++){
            if(A[i]>barrier) return false;
            if(pages+A[i]>barrier){
                student+=1;        //jaise hi barrier bda studnt ka count bda diya and pages firse 0 and pages me plus shuru
              pages=A[i];   // jaise 12 34 67 90 he toh jaise hi 67 aya first case me mid 107 tha toh vahan break hogya pr [ages ke andr value toh jayegi hi ]
            }
            else{
                pages+=A[i];
            }
        }
          if(student>M) return false;
        else return true;}
    
    int shipWithinDays(vector<int>& weights, int days) {
        int N=weights.size();
         int ans=-1,low=INT_MAX;
        int high=0;
        for(int i=0;i<N;i++){
            low=min(low,weights[i]),high+=weights[i];
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isPossible(mid,weights,N,days)){
                ans=mid;
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }return ans;
    }
};