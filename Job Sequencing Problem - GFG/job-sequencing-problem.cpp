// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
        static bool cmp(Job a,Job b) {
       return a.profit>b.profit;
   } //yeh comparator he jo true return krdega agr value greater hui toh
    vector<int> JobScheduling(Job arr[], int n) 
    { 

   

       vector<int> res;   //final result store krne ko
       sort(arr,arr+n,cmp);
       int maxProfit=0,maxDeadLine=0,jobcount=0;
       for(int i=0;i<n;i++) {
           maxDeadLine=max(maxDeadLine,arr[i].dead);   //max deadline nikal lo kitni he
       }
       vector<int> scheduler(maxDeadLine+1,-1); 
       //hmne ek vector bna lia he jisme hmne -1 daldia sarre me
       for(int i=0;i<n;i++) {
           for(int j=arr[i].dead;j>0;j--) {  //us value se yahan tk aye like jo last me hoga maxdeadline vahan se last se age traverse krlo   kyuki sbse pehle try kro last me dalo value
               if(scheduler[j]==-1) {
                   scheduler[j]=arr[i].id;
                   maxProfit+=arr[i].profit;//   profit bdh rha hme sbse pehle max profit vala hi uthana he 
                   jobcount++; //count bdh rha he job ka 
                   break;
               }
           }
       }
       res.push_back(jobcount);
       res.push_back(maxProfit);
       return res;
   } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends