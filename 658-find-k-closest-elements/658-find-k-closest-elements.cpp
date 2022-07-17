class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
          priority_queue<pair<int,int>> pq;
        
        for(int i=0;i<arr.size();i++)
            {pq.push({abs(arr[i]-x),arr[i]});
              if(pq.size()>k)
                  pq.pop();
            }
        vector<int> ans;
        while(pq.size()>0)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    
    }
};

//sing min heap

//  // making a min-heap of absolute difference and corresponding array value
// 	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

//     // store the difference one by one with the array value
// 	for (int i = 0; i < arr.size(); i++)
// 		pq.push({abs(arr[i] - x), arr[i]});

// 	vector<int> ans;

//     // get the top of the heap i.e. the element with minimum absolute difference
// 	for (int i = 0; i < k; i++)
// 	{
// 		ans.push_back(pq.top().second);
// 		pq.pop(); // pop it k times
// 	}

// 	sort(ans.begin(), ans.end());
// 	return ans;
// }

