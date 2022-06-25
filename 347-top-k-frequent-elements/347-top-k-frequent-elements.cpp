class Solution {
public:
   
    static bool compare(pair<int, int> p1, pair<int, int> p2)
{
	
	if (p1.second == p2.second)
		return p1.first > p2.first;

	return p1.second > p2.second;
}
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
     
        unordered_map<int, int> um;
	for (int i = 0; i < nums.size(); i++){
		um[nums[i]]++;
        
        }
    vector<pair<int, int> > freq_arr(um.begin(), um.end());

	sort(freq_arr.begin(), freq_arr.end(), compare);
        vector<int>ans;
        for(int i=0;i<k;i++){
        
           ans.push_back(freq_arr[i].first);
        }
        return ans;
    }
};