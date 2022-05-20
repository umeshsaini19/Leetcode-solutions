// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>>v;
        int starting_point,ending_point;
        int counting=1;  //kyuki ek meeting toh atleast hogi hi 
        for(int i=0;i<n;i++){
            v.push_back(make_pair(end[i],start[i]));//yeh end pehle esleye dala he bcz jo age sort krna he voh first pe jo dala he uske hisab se hoga and we want ki sort second ke hisab se ho kyuki we thought ki pehle sort krlo and
            //dekhlo konci meeting kb meeting horhi kisi ka starting previous ke end se 
            //pehle horha voh meeting include na hogi 
        }
        sort(v.begin(),v.end());
    starting_point=v[0].second;   
        ending_point=v[0].first;
        for(int i=1;i<n;i++){
            if(v[i].second>ending_point){
              
                ending_point=v[i].first;
                  counting++;
              
            }
        }
        return counting;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends